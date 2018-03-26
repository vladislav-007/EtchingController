
// EtchingControllerView.cpp : ���������� ������ CEtchingControllerView
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "EtchingController.h"
#endif

#include "EtchingControllerDoc.h"
#include "EtchingControllerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEtchingControllerView

IMPLEMENT_DYNCREATE(CEtchingControllerView, CView)

BEGIN_MESSAGE_MAP(CEtchingControllerView, CView)
	// ����������� ������� ������
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// ��������/����������� CEtchingControllerView

CEtchingControllerView::CEtchingControllerView()
{
	// TODO: �������� ��� ��������

}

CEtchingControllerView::~CEtchingControllerView()
{
}

BOOL CEtchingControllerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �������� ����� Window ��� ����� ����������� ���������
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// ��������� CEtchingControllerView

void CEtchingControllerView::OnDraw(CDC* /*pDC*/)
{
	CEtchingControllerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �������� ����� ��� ��������� ��� ����������� ������
}


// ������ CEtchingControllerView

BOOL CEtchingControllerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ���������� �� ���������
	return DoPreparePrinting(pInfo);
}

void CEtchingControllerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� �������������� ������������� ����� �������
}

void CEtchingControllerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� ������� ����� ������
}


// ����������� CEtchingControllerView

#ifdef _DEBUG
void CEtchingControllerView::AssertValid() const
{
	CView::AssertValid();
}

void CEtchingControllerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEtchingControllerDoc* CEtchingControllerView::GetDocument() const // �������� ������������ ������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEtchingControllerDoc)));
	return (CEtchingControllerDoc*)m_pDocument;
}
#endif //_DEBUG


// ����������� ��������� CEtchingControllerView
