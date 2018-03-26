
// EtchingControllerView.h : интерфейс класса CEtchingControllerView
//

#pragma once


class CEtchingControllerView : public CView
{
protected: // создать только из сериализации
	CEtchingControllerView();
	DECLARE_DYNCREATE(CEtchingControllerView)

// Атрибуты
public:
	CEtchingControllerDoc* GetDocument() const;

// Операции
public:

// Переопределение
public:
	virtual void OnDraw(CDC* pDC);  // переопределено для отрисовки этого представления
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Реализация
public:
	virtual ~CEtchingControllerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // отладочная версия в EtchingControllerView.cpp
inline CEtchingControllerDoc* CEtchingControllerView::GetDocument() const
   { return reinterpret_cast<CEtchingControllerDoc*>(m_pDocument); }
#endif

