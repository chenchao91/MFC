// secondsum.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "secondsum.h"
#include "afxdialogex.h"


// secondsum �Ի���

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


// secondsum ��Ϣ�������
