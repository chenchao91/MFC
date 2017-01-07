// TipDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "TipDlg.h"
#include "afxdialogex.h"


// TipDlg 对话框

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


// TipDlg 消息处理程序


void TipDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void TipDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}
