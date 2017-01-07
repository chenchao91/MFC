// last.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "last.h"
#include "afxdialogex.h"


// last 对话框

IMPLEMENT_DYNAMIC(last, CPropertyPage)

last::last()
	: CPropertyPage(IDD_sum3)
{

}

last::~last()
{
}

void last::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(last, CPropertyPage)
END_MESSAGE_MAP()


// last 消息处理程序


//BOOL last::OnSetActive()
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
//	psheet->SetFinishText(_T("完成"));
//	return CPropertyPage::OnSetActive();
//}


//BOOL last::OnWizardFinish()
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	MessageBox(_T("使用说明向导结束"));
//	MessageBox(_T("骗你的"));
//	return CPropertyPage::OnWizardFinish();
//}
