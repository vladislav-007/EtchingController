
// EtchingController.h : ������� ���� ��������� ��� ���������� EtchingController
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// CEtchingControllerApp:
// � ���������� ������� ������ ��. EtchingController.cpp
//

class CEtchingControllerApp : public CWinApp
{
public:
	CEtchingControllerApp();


// ���������������
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ����������
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEtchingControllerApp theApp;
