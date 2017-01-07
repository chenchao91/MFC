#pragma once


// last 对话框

class last : public CPropertyPage
{
	DECLARE_DYNAMIC(last)

public:
	last();
	virtual ~last();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_sum3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	//virtual BOOL OnSetActive();
	//virtual BOOL OnWizardFinish();
};
