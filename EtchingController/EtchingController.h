
// EtchingController.h : главный файл заголовка для приложения EtchingController
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CEtchingControllerApp:
// О реализации данного класса см. EtchingController.cpp
//

class CEtchingControllerApp : public CWinApp
{
public:
	CEtchingControllerApp();


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEtchingControllerApp theApp;
