
// AdditionDlg.h : ͷ�ļ�
//
#include"TipDlg.h"
#pragma once


// CAdditionDlg �Ի���
class CAdditionDlg : public CDialogEx
{
// ����
public:
	CAdditionDlg(CWnd* pParent = NULL);	// ��׼���캯��
	~CAdditionDlg();
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDITION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


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
	afx_msg void OnEnChangeEdit1();
	int m_edit1;
	int m_edit2;
	int m_edit3;
	afx_msg void OnBnClickedButton();
	TipDlg *m_pTipDlg;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnBnClickedButtonT();
	afx_msg void OnBnClickedButton4();
	CFont m_font;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton5();
};
