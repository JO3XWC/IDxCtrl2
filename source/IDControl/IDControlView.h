
// IDControlView.h : CIDControlView �N���X�̃C���^�[�t�F�C�X
//

#pragma once


class CIDControlView : public CView
{
protected: // �V���A��������̂ݍ쐬���܂��B
	CIDControlView();
	DECLARE_DYNCREATE(CIDControlView)

// ����
public:
	CIDControlDoc* GetDocument() const;

// ����
public:

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷�邽�߂ɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ����
public:
	virtual ~CIDControlView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // IDControlView.cpp �̃f�o�b�O �o�[�W����
inline CIDControlDoc* CIDControlView::GetDocument() const
   { return reinterpret_cast<CIDControlDoc*>(m_pDocument); }
#endif
