
// EtchingControllerView.cpp : реализаци€ класса CEtchingControllerView
//

#include "stdafx.h"
// SHARED_HANDLERS можно определить в обработчиках фильтров просмотра реализации проекта ATL, эскизов
// и поиска; позвол€ет совместно использовать код документа в данным проекте.
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
	// —тандартные команды печати
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// создание/уничтожение CEtchingControllerView

CEtchingControllerView::CEtchingControllerView()
{
	// TODO: добавьте код создани€

}

CEtchingControllerView::~CEtchingControllerView()
{
}

BOOL CEtchingControllerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: изменить класс Window или стили посредством изменени€
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// рисование CEtchingControllerView

void CEtchingControllerView::OnDraw(CDC* /*pDC*/)
{
	CEtchingControllerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: добавьте здесь код отрисовки дл€ собственных данных
}


// печать CEtchingControllerView

BOOL CEtchingControllerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// подготовка по умолчанию
	return DoPreparePrinting(pInfo);
}

void CEtchingControllerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте дополнительную инициализацию перед печатью
}

void CEtchingControllerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: добавьте очистку после печати
}


// диагностика CEtchingControllerView

#ifdef _DEBUG
void CEtchingControllerView::AssertValid() const
{
	CView::AssertValid();
}

void CEtchingControllerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEtchingControllerDoc* CEtchingControllerView::GetDocument() const // встроена неотлаженна€ верси€
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEtchingControllerDoc)));
	return (CEtchingControllerDoc*)m_pDocument;
}
#endif //_DEBUG


// обработчики сообщений CEtchingControllerView
