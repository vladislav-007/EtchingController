// dllmain.cpp: реализация DllMain.

#include "stdafx.h"
#include "resource.h"
#include "EtchingControllerHandlers_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CEtchingControllerHandlersModule _AtlModule;

class CEtchingControllerHandlersApp : public CWinApp
{
public:

// Переопределение
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CEtchingControllerHandlersApp, CWinApp)
END_MESSAGE_MAP()

CEtchingControllerHandlersApp theApp;

BOOL CEtchingControllerHandlersApp::InitInstance()
{
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
	return CWinApp::InitInstance();
}

int CEtchingControllerHandlersApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
