
// MFCLabelerDlg.h : ͷ�ļ�
//

#pragma once

#include "mropencv.h"
// CMFCLabelerDlg �Ի���
class CMFCLabelerDlg : public CDialogEx
{
// ����
public:
	CMFCLabelerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MFCLABELER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��
	Mat m_img;
	Mat m_showimg;
	bool m_bDrawing;
	CPoint m_ptBegin;
	CPoint m_ptEnd;
	float m_ratiox = 1;
	float m_ratioy = 1;

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonOpen();
	afx_msg void OnBnClickedButtonPrev();
	afx_msg void OnBnClickedButtonNext();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
