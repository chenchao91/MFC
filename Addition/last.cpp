// last.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Addition.h"
#include "last.h"
#include "afxdialogex.h"


// last �Ի���

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


// last ��Ϣ�������


//BOOL last::OnSetActive()
//{
//	// TODO: �ڴ����ר�ô����/����û���
//	CPropertySheet* psheet = (CPropertySheet*)GetParent();
//	psheet->SetFinishText(_T("���"));
//	return CPropertyPage::OnSetActive();
//}


//BOOL last::OnWizardFinish()
//{
//	// TODO: �ڴ����ר�ô����/����û���
//	MessageBox(_T("ʹ��˵���򵼽���"));
//	MessageBox(_T("ƭ���"));
//	return CPropertyPage::OnWizardFinish();
//}
