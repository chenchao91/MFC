// TipDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "TipDlg.h"
#include "afxdialogex.h"


// TipDlg �Ի���

IMPLEMENT_DYNAMIC(TipDlg, CDialogEx)

TipDlg::TipDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

TipDlg::~TipDlg()
{
}

void TipDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(TipDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &TipDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &TipDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// TipDlg ��Ϣ�������


void TipDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void TipDlg::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
