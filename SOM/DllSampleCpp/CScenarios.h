// [Typelib �N���X�ǉ��E�B�U�[�h] �ō쐬���ꂽ IDispatch ���b�p�[ �N���X�𐶐����܂����B

#import "C:\\Program Files\\Microsoft Office\\Office12\\EXCEL.EXE" no_namespace
// CScenarios ���b�p�[ �N���X

class CScenarios : public COleDispatchDriver
{
public:
	CScenarios(){} // COleDispatchDriver ����̃R���X�g���N�^�[���Ăяo���܂��B
	CScenarios(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CScenarios(const CScenarios& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// ����
public:

	// ����
public:


	// Scenarios ���\�b�h
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x94, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long get_Creator()
	{
		long result;
		InvokeHelper(0x95, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x96, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH Add(LPCTSTR Name, VARIANT& ChangingCells, VARIANT& Values, VARIANT& Comment, VARIANT& Locked, VARIANT& Hidden)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Name, &ChangingCells, &Values, &Comment, &Locked, &Hidden);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	VARIANT CreateSummary(long ReportType, VARIANT& ResultCells)
	{
		VARIANT result;
		static BYTE parms[] = VTS_I4 VTS_VARIANT ;
		InvokeHelper(0x391, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, ReportType, &ResultCells);
		return result;
	}
	LPDISPATCH Item(VARIANT& Index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Index);
		return result;
	}
	VARIANT Merge(VARIANT& Source)
	{
		VARIANT result;
		static BYTE parms[] = VTS_VARIANT ;
		InvokeHelper(0x234, DISPATCH_METHOD, VT_VARIANT, (void*)&result, parms, &Source);
		return result;
	}
	LPUNKNOWN _NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}

	// Scenarios �v���p�e�B
public:

};