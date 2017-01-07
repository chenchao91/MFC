// firstsum.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "firstsum.h"
#include "afxdialogex.h"


// firstsum 对话框

IMPLEMENT_DYNAMIC(firstsum, CPropertyPage)

firstsum::firstsum()
	: CPropertyPage(IDD_sum1)
{

}

firstsum::~firstsum()
{
}

void firstsum::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(firstsum, CPropertyPage)
END_MESSAGE_MAP()


// firstsum 消息处理程序


//BOOL firstsum::OnSetActive()
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
//	psheet->SetWizardButtons(PSWIZB_NEXT);
//	return CPropertyPage::OnSetActive();
//}
