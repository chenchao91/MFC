// MyDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "MyDialog.h"
#include "afxdialogex.h"


// CMyDialog �Ի���

IMPLEMENT_DYNAMIC(CMyDialog, CDialogEx)

CMyDialog::CMyDialog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADDITION_DIALOG, pParent)
{

}

CMyDialog::~CMyDialog()
{
}

void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialogEx)
END_MESSAGE_MAP()


// CMyDialog ��Ϣ��������