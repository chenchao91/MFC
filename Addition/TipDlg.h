#pragma once


// TipDlg �Ի���

class TipDlg : public CDialogEx
{
	DECLARE_DYNAMIC(TipDlg)

public:
	TipDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~TipDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
