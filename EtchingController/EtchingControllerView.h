
// EtchingControllerView.h : ��������� ������ CEtchingControllerView
//

#pragma once


class CEtchingControllerView : public CView
{
protected: // ������� ������ �� ������������
	CEtchingControllerView();
	DECLARE_DYNCREATE(CEtchingControllerView)

// ��������
public:
	CEtchingControllerDoc* GetDocument() const;

// ��������
public:

// ���������������
public:
	virtual void OnDraw(CDC* pDC);  // �������������� ��� ��������� ����� �������������
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����������
public:
	virtual ~CEtchingControllerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ���������� ������ � EtchingControllerView.cpp
inline CEtchingControllerDoc* CEtchingControllerView::GetDocument() const
   { return reinterpret_cast<CEtchingControllerDoc*>(m_pDocument); }
#endif

