#pragma once


// secondsum �Ի���

class secondsum : public CPropertyPage
{
	DECLARE_DYNAMIC(secondsum)

public:
	secondsum();
	virtual ~secondsum();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
