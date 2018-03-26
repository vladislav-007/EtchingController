
// EtchingControllerDoc.cpp : ���������� ������ CEtchingControllerDoc
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "EtchingController.h"
#endif

#include "EtchingControllerDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CEtchingControllerDoc

IMPLEMENT_DYNCREATE(CEtchingControllerDoc, CDocument)

BEGIN_MESSAGE_MAP(CEtchingControllerDoc, CDocument)
END_MESSAGE_MAP()


// ��������/����������� CEtchingControllerDoc

CEtchingControllerDoc::CEtchingControllerDoc()
{
	// TODO: �������� ��� ��� ������������ ������ ������������

}

CEtchingControllerDoc::~CEtchingControllerDoc()
{
}

BOOL CEtchingControllerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �������� ��� ��������� �������������
	// (��������� SDI ����� �������� ������������ ���� ��������)

	return TRUE;
}




// ������������ CEtchingControllerDoc

void CEtchingControllerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �������� ��� ����������
	}
	else
	{
		// TODO: �������� ��� ��������
	}
}

#ifdef SHARED_HANDLERS

// ��������� ��� �������
void CEtchingControllerDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �������� ���� ��� ��� ����������� ������ ���������
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ��������� ������������ ������
void CEtchingControllerDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ������� ���������� ������ �� ������ ���������. 
	// ����� ����������� ������ ����������� ������ � ������� ";"

	// ��������:  strSearchContent = _T("�����;�������������;����;������ ole;");
	SetSearchContent(strSearchContent);
}

void CEtchingControllerDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// ����������� CEtchingControllerDoc

#ifdef _DEBUG
void CEtchingControllerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEtchingControllerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// ������� CEtchingControllerDoc
