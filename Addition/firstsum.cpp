// firstsum.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "firstsum.h"
#include "afxdialogex.h"


// firstsum �Ի���

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


// firstsum ��Ϣ�������


//BOOL firstsum::OnSetActive()
//{
//	// TODO: �ڴ����ר�ô����/����û���
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
//	psheet->SetWizardButtons(PSWIZB_NEXT);
//	return CPropertyPage::OnSetActive();
//}
