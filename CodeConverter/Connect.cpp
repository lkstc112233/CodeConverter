// Connect.cpp : CConnect �ľ���ʵ��
#include "stdafx.h"
#include "AddIn.h"
#include "Connect.h"

extern CAddInModule _AtlModule;

// CConnect
STDMETHODIMP CConnect::OnConnection(IDispatch *pApplication, ext_ConnectMode ConnectMode, IDispatch *pAddInInst, SAFEARRAY ** /*�Զ���*/ )
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
			//�ڡ����ߡ��˵��������һ����ť��
			IfFailGoCheck(m_pDTE->get_CommandBars(&pDisp), pDisp);
			pCommandBars = pDisp;

			//���� MenuBar �����������������������������˵���Ķ���������:
			IfFailGoCheck(pCommandBars->get_Item(CComVariant(L"MenuBar"), &pMenuBarCommandBar), pMenuBarCommandBar);
			IfFailGoCheck(pMenuBarCommandBar->get_Controls(&pMenuBarControls), pMenuBarControls);

			//�� MenuBar �������ϲ��ҡ����ߡ�������:
			IfFailGoCheck(pMenuBarControls->get_Item(CComVariant(L"Tools"), &pToolsCommandBarControl), pToolsCommandBarControl);
			pToolsPopup = pToolsCommandBarControl;
			IfFailGoCheck(pToolsPopup->get_CommandBar(&pToolsCommandBar), pToolsCommandBar);

			//��ӿؼ�:
			pDisp = NULL;
			IfFailGoCheck(pCreatedCommand->AddControl(pToolsCommandBar, 1, &pDisp), pDisp);
		}
		return S_OK;
	}
Error:
	return hr;
}

STDMETHODIMP CConnect::OnDisconnection(ext_DisconnectMode /*RemoveMode*/, SAFEARRAY ** /*�Զ���*/ )
{
	m_pDTE = NULL;
	m_pAddInInstance = NULL;
	return S_OK;
}

STDMETHODIMP CConnect::OnAddInsUpdate (SAFEARRAY ** /*�Զ���*/ )
{
	return S_OK;
}

STDMETHODIMP CConnect::OnStartupComplete (SAFEARRAY ** /*�Զ���*/ )
{
	return S_OK;
}

STDMETHODIMP CConnect::OnBeginShutdown (SAFEARRAY ** /*�Զ���*/ )
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
			//string outCode = CodeSmart.AlignText(selectedCode);            //����ѡ���ı�
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

			outCode=smart.AlignText(selectedCode);            //����ѡ���ı�
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