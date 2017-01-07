#pragma once


// secondsum 对话框

class secondsum : public CPropertyPage
{
	DECLARE_DYNAMIC(secondsum)

public:
	secondsum();
	virtual ~secondsum();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
