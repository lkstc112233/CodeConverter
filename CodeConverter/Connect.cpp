// Connect.cpp : CConnect 的具体实现
#include "stdafx.h"
#include "AddIn.h"
#include "Connect.h"

extern CAddInModule _AtlModule;

// CConnect
STDMETHODIMP CConnect::OnConnection(IDispatch *pApplication, ext_ConnectMode ConnectMode, IDispatch *pAddInInst, SAFEARRAY ** /*自定义*/ )
{
	HRESULT hr = S_OK;
	pApplication->QueryInterface(__uuidof(DTE2), (LPVOID*)&m_pDTE);
	pAddInInst->QueryInterface(__uuidof(AddIn), (LPVOID*)&m_pAddInInstance);
	if(ConnectMode == 5) //5 == ext_cm_UISetup
	{
		HRESULT hr = S_OK;
		CComPtr<IDispatch> pDisp;
		CComQIPtr<Commands> pCommands;
		CComQIPtr<Commands2> pCommands2;
		CComQIPtr<_CommandBars> pCommandBars;
		CComPtr<CommandBarControl> pCommandBarControl;
		CComPtr<Command> pCreatedCommand;
		CComPtr<CommandBar> pMenuBarCommandBar;
		CComPtr<CommandBarControls> pMenuBarControls;
		CComPtr<CommandBarControl> pToolsCommandBarControl;
		CComQIPtr<CommandBar> pToolsCommandBar;
		CComQIPtr<CommandBarPopup> pToolsPopup;

		IfFailGoCheck(m_pDTE->get_Commands(&pCommands), pCommands);
		pCommands2 = pCommands;
		if(SUCCEEDED(pCommands2->AddNamedCommand2(m_pAddInInstance, CComBSTR("CodeConverter"), CComBSTR("CodeConverter"), CComBSTR("Executes the command for CodeConverter"), VARIANT_TRUE, CComVariant(59), NULL, vsCommandStatusSupported+vsCommandStatusEnabled, vsCommandStylePictAndText, vsCommandControlTypeButton, &pCreatedCommand)) && (pCreatedCommand))
		{
			//在“工具”菜单栏上添加一个按钮。
			IfFailGoCheck(m_pDTE->get_CommandBars(&pDisp), pDisp);
			pCommandBars = pDisp;

			//查找 MenuBar 命令栏，该命令栏是容纳所有主菜单项的顶级命令栏:
			IfFailGoCheck(pCommandBars->get_Item(CComVariant(L"MenuBar"), &pMenuBarCommandBar), pMenuBarCommandBar);
			IfFailGoCheck(pMenuBarCommandBar->get_Controls(&pMenuBarControls), pMenuBarControls);

			//在 MenuBar 命令栏上查找“工具”命令栏:
			IfFailGoCheck(pMenuBarControls->get_Item(CComVariant(L"Tools"), &pToolsCommandBarControl), pToolsCommandBarControl);
			pToolsPopup = pToolsCommandBarControl;
			IfFailGoCheck(pToolsPopup->get_CommandBar(&pToolsCommandBar), pToolsCommandBar);

			//添加控件:
			pDisp = NULL;
			IfFailGoCheck(pCreatedCommand->AddControl(pToolsCommandBar, 1, &pDisp), pDisp);
		}
		return S_OK;
	}
Error:
	return hr;
}

STDMETHODIMP CConnect::OnDisconnection(ext_DisconnectMode /*RemoveMode*/, SAFEARRAY ** /*自定义*/ )
{
	m_pDTE = NULL;
	m_pAddInInstance = NULL;
	return S_OK;
}

STDMETHODIMP CConnect::OnAddInsUpdate (SAFEARRAY ** /*自定义*/ )
{
	return S_OK;
}

STDMETHODIMP CConnect::OnStartupComplete (SAFEARRAY ** /*自定义*/ )
{
	return S_OK;
}

STDMETHODIMP CConnect::OnBeginShutdown (SAFEARRAY ** /*自定义*/ )
{
	return S_OK;
}

STDMETHODIMP CConnect::QueryStatus(BSTR bstrCmdName, vsCommandStatusTextWanted NeededText, vsCommandStatus *pStatusOption, VARIANT *pvarCommandText)
{
  if(NeededText == vsCommandStatusTextWantedNone)
	{
	  if(!_wcsicmp(bstrCmdName, L"CodeConverter.Connect.CodeConverter"))
	  {
		  *pStatusOption = (vsCommandStatus)(vsCommandStatusEnabled+vsCommandStatusSupported);
	  }
  }
	return S_OK;
}

STDMETHODIMP CConnect::Exec(BSTR bstrCmdName, vsCommandExecOption ExecuteOption, VARIANT * /*pvarVariantIn*/, VARIANT * /*pvarVariantOut*/, VARIANT_BOOL *pvbHandled)
{
	*pvbHandled = VARIANT_FALSE;
	if(ExecuteOption == vsCommandExecOptionDoDefault)
	{
		if(!_wcsicmp(bstrCmdName, L"CodeConverter.Connect.CodeConverter"))
		{
			//TextSelection select = ((TextSelection)_applicationObject.ActiveDocument.Selection);
			//int nTopLine = select.TopLine;
			//int nBottomLine = select.BottomLine;
			//bool bLastLineEmpty = select.BottomPoint.AtStartOfLine;
			//select.GotoLine(nTopLine, true);
			//select.LineDown(true, nBottomLine - nTopLine);
			//select.EndOfLine(true);

			//if (bLastLineEmpty)
			//	select.StartOfLine(vsStartOfLineOptions.vsStartOfLineOptionsFirstColumn, true);
			//string selectedCode = select.Text;
			//string outCode = CodeSmart.AlignText(selectedCode);            //对齐选中文本
			//select.Insert(outCode, (int)vsInsertFlags.vsInsertFlagsCollapseToEnd);
			//handled = true;
			//return;

			Document *activeDocument;
			m_pDTE->get_ActiveDocument(&activeDocument);
			IDispatch *select;
			activeDocument->get_Selection(&select);
			TextSelection *sel=static_cast<TextSelection*>(select);
			long nTopLine=0;
			long nBottomLine=0;
			sel->get_TopLine(&nTopLine);
			char dest[1000];
//			::MessageBoxA(NULL,_itoa(nTopLine,dest,10),"nTopLine",0);
			sel->get_BottomLine(&nBottomLine);
//			::MessageBoxA(NULL,_itoa(nTopLine,dest,10),"nBottomLine",0);
			VirtualPoint *bottomPoint;
			sel->get_BottomPoint(&bottomPoint);
			VARIANT_BOOL bLastLineEmpty;
			bottomPoint->get_AtEndOfLine(&bLastLineEmpty);
			sel->GotoLine(nTopLine,true);
			sel->LineDown(true,nBottomLine-nTopLine);
			sel->EndOfLine(true);

			if (bLastLineEmpty)
				sel->StartOfLine(vsStartOfLineOptionsFirstColumn, true);
			BSTR selectedCode;
			BSTR outCode;
			sel->get_Text(&selectedCode);

			outCode=smart.AlignText(selectedCode);            //对齐选中文本
			::MessageBoxW(NULL,outCode,L"outCode",0);
			sel->NewLine(1);
			sel->Delete(-1);
			sel->DestructiveInsert(outCode);
			//sel->Insert(outCode, vsInsertFlagsCollapseToEnd);

			*pvbHandled = VARIANT_TRUE;
			return S_OK;
		}
	}
	return S_OK;
}