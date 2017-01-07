#pragma once
#include"firstsum.h"
#include"secondsum.h"
#include"last.h"


// CAddSheet

class CAddSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CAddSheet)

public:
	CAddSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CAddSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	virtual ~CAddSheet();

protected:
	DECLARE_MESSAGE_MAP()
private:
	firstsum m_summand;
	secondsum m_addend;
	last m_add;
};


