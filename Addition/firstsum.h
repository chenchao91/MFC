#pragma once


// firstsum �Ի���

class firstsum : public CPropertyPage
{
	DECLARE_DYNAMIC(firstsum)

public:
	firstsum();
	virtual ~firstsum();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	//virtual BOOL OnSetActive();
};
