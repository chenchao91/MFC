#pragma once


// last �Ի���

class last : public CPropertyPage
{
	DECLARE_DYNAMIC(last)

public:
	last();
	virtual ~last();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	//virtual BOOL OnSetActive();
	//virtual BOOL OnWizardFinish();
};
