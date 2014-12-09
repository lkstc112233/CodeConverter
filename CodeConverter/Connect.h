// Connect.h : CConnect ������

#pragma once
#include "resource.h"       // ������

#include "CodeSmart.h"

using namespace AddInDesignerObjects;
using namespace EnvDTE;
using namespace EnvDTE80;
using namespace Microsoft_VisualStudio_CommandBars;

/// <summary>����ʵ����ӳ���Ķ���</summary>
/// <seealso class='IDTExtensibility2' />
class ATL_NO_VTABLE CConnect : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CConnect, &CLSID_Connect>,
	public IDispatchImpl<IDTCommandTarget, &IID_IDTCommandTarget, &LIBID_EnvDTE, 7, 0>,
	public IDispatchImpl<_IDTExtensibility2, &IID__IDTExtensibility2, &LIBID_AddInDesignerObjects, 1, 0>
{
public:
	/// <summary>ʵ����ӳ������Ĺ��캯�����뽫���ĳ�ʼ���������ڴ˷����ڡ�</summary>
	CConnect()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ADDIN)
DECLARE_NOT_AGGREGATABLE(CConnect)

BEGIN_COM_MAP(CConnect)
	COM_INTERFACE_ENTRY(IDTExtensibility2)
	COM_INTERFACE_ENTRY(IDTCommandTarget)
	COM_INTERFACE_ENTRY2(IDispatch, IDTExtensibility2)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}
	
	void FinalRelease() 
	{
	}

public:
//IDTExtensibility2 �ľ���ʵ��:

	/// <summary>ʵ�� IDTExtensibility2 �ӿڵ� OnConnection �������������ڼ�����ӳ����֪ͨ��</summary>
	/// <param term='application'>����Ӧ�ó���ĸ�����</param>
	/// <param term='connectMode'>������ӳ���ļ��ط�ʽ��</param>
	/// <param term='addInInst'>��ʾ����ӳ���Ķ���</param>
	/// <seealso class='IDTExtensibility2' />
	STDMETHOD(OnConnection)(IDispatch * Application, ext_ConnectMode ConnectMode, IDispatch *AddInInst, SAFEARRAY **custom);

	/// <summary>ʵ�� IDTExtensibility2 �ӿڵ� OnDisconnection ��������������ж����ӳ����֪ͨ��</summary>
	/// <param term='disconnectMode'>������ӳ����ж�ط�ʽ��</param>
	/// <param term='custom'>�ض�������Ӧ�ó���Ĳ������顣</param>
	/// <seealso class='IDTExtensibility2' />
	STDMETHOD(OnDisconnection)(ext_DisconnectMode RemoveMode, SAFEARRAY **custom );

	/// <summary>ʵ�� IDTExtensibility2 �ӿڵ� OnAddInsUpdate ����������ӳ��򼯺��ѷ�������ʱ����֪ͨ��</summary>
	/// <param term='custom'>�ض�������Ӧ�ó���Ĳ������顣</param>
	/// <seealso class='IDTExtensibility2' />	
	STDMETHOD(OnAddInsUpdate)(SAFEARRAY **custom );

	/// <summary>ʵ�� IDTExtensibility2 �ӿڵ� OnStartupComplete ��������������Ӧ�ó�������ɼ��ص�֪ͨ��</summary>
	/// <param term='custom'>�ض�������Ӧ�ó���Ĳ������顣</param>
	/// <seealso class='IDTExtensibility2' />
	STDMETHOD(OnStartupComplete)(SAFEARRAY **custom );

	/// <summary>ʵ�� IDTExtensibility2 �ӿڵ� OnBeginShutdown ��������������ж������Ӧ�ó����֪ͨ��</summary>
	/// <param term='custom'>�ض�������Ӧ�ó���Ĳ������顣</param>
	/// <seealso class='IDTExtensibility2' />
	STDMETHOD(OnBeginShutdown)(SAFEARRAY **custom );
	
//IDTCommandTarget �ľ���ʵ��:

	/// <summary>ʵ�� IDTCommandTarget �ӿڵ� QueryStatus �������˷����ڸ��¸�����Ŀ�����ʱ����</summary>
	/// <param term='commandName'>Ҫȷ����״̬����������ơ�</param>
	/// <param term='neededText'>������������ı���</param>
	/// <param term='status'>���������û������е�״̬��</param>
	/// <param term='commandText'>neededText ������Ҫ����ı���</param>
	/// <seealso class='Exec' />
	STDMETHOD(QueryStatus)(BSTR CmdName, vsCommandStatusTextWanted NeededText, vsCommandStatus *StatusOption, VARIANT *CommandText);

	/// <summary>ʵ�� IDTCommandTarget �ӿڵ� Exec �������˷����ڵ��ø�����ʱ���á�</summary>
	/// <param term='commandName'>Ҫִ�е���������ơ�</param>
	/// <param term='executeOption'>����������Ӧ������С�</param>
	/// <param term='varIn'>�ӵ��÷����ݵ���������Ĳ�����</param>
	/// <param term='varOut'>���������򴫵ݵ����÷��Ĳ�����</param>
	/// <param term='handled'>֪ͨ���÷��������Ƿ��ѱ�����</param>
	/// <seealso class='Exec' />
	STDMETHOD(Exec)(BSTR CmdName, vsCommandExecOption ExecuteOption, VARIANT *VariantIn, VARIANT *VariantOut, VARIANT_BOOL *Handled);

private:
	CComPtr<DTE2> m_pDTE;
	CComPtr<AddIn> m_pAddInInstance;
	CodeSmart smart;
};

OBJECT_ENTRY_AUTO(__uuidof(Connect), CConnect)
