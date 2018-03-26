// dllmain.h: объ€вление класса модул€.

class CEtchingControllerHandlersModule : public ATL::CAtlDllModuleT< CEtchingControllerHandlersModule >
{
public :
	DECLARE_LIBID(LIBID_EtchingControllerHandlersLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ETCHINGCONTROLLERHANDLERS, "{4CD22A6F-C8CF-4B46-90DE-B482F0F0C45E}")
};

extern class CEtchingControllerHandlersModule _AtlModule;
