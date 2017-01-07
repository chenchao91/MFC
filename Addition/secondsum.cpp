// secondsum.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "secondsum.h"
#include "afxdialogex.h"


// secondsum 对话框

IMPLEMENT_DYNAMIC(secondsum, CPropertyPage)

secondsum::secondsum()
	: CPropertyPage(IDD_sum2)
{

}

secondsum::~secondsum()
{
}

void secondsum::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(secondsum, CPropertyPage)
END_MESSAGE_MAP()


// secondsum 消息处理程序
