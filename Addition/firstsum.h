#pragma once


// firstsum 对话框

class firstsum : public CPropertyPage
{
	DECLARE_DYNAMIC(firstsum)

public:
	firstsum();
	virtual ~firstsum();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	//virtual BOOL OnSetActive();
};
