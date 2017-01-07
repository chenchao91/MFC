
// AdditionDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Addition.h"
#include "AdditionDlg.h"
#include "afxdialogex.h"
#include"TipDlg.h"
#include"AddSheet.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CAdditionDlg 对话框



CAdditionDlg::CAdditionDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADDITION_DIALOG, pParent)
	, m_edit1(0)
	, m_edit2(0)
	, m_edit3(0)
{
	m_pTipDlg = NULL;
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CAdditionDlg::~CAdditionDlg()
{
	if (m_pTipDlg != NULL)
		delete m_pTipDlg;
}

void CAdditionDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
}

BEGIN_MESSAGE_MAP(CAdditionDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CAdditionDlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON2, &CAdditionDlg::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT4, &CAdditionDlg::OnEnChangeEdit4)
	ON_BN_CLICKED(IDC_BUTTON_T, &CAdditionDlg::OnBnClickedButtonT)
	ON_BN_CLICKED(IDC_BUTTON3, &CAdditionDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDCANCEL, &CAdditionDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON5, &CAdditionDlg::OnBnClickedButton5)
END_MESSAGE_MAP()


// CAdditionDlg 消息处理程序

BOOL CAdditionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CAdditionDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CAdditionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CAdditionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAdditionDlg::OnBnClickedButton()
{
	// TODO: 在此添加控件通知处理程序代码
	/*INT_PTR nRes;
	TipDlg tipDlg;
	nRes = tipDlg.DoModal();
	if (IDCANCEL == nRes)
		return;*/

	if (NULL == m_pTipDlg)
	{
		m_pTipDlg = new TipDlg();
		m_pTipDlg->Create(IDD_DIALOG1,this);
	}
	m_pTipDlg->ShowWindow(SW_SHOW);


	UpdateData(TRUE);
	m_edit3 = m_edit1 + m_edit2;
	UpdateData(FALSE);
}


void CAdditionDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	/*CAddSheet sheet(_T("属性表对象"));
	sheet.SetWizardMode();*/
	CAddSheet sheet(_T("使用说明"));
	sheet.DoModal();
}


void CAdditionDlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CAdditionDlg::OnBnClickedButtonT()
{
	/*CString strFontName;
	LOGFONT lf;
	memset(&lf, 0, sizeof(LOGFONT));
	_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("宋体"));
	CFontDialog fontDlg(&lf);
	if (IDOK == fontDlg.DoModal())
	{
		if (m_font.m_hObject)
			m_font.DeleteObject();
		m_font.CreateFontIndirect(fontDlg.m_cf.lpLogFont);
		GetDlgItem(IDC_EDIT4)->SetFont(&m_font);
		strFontName = fontDlg.m_cf.lpLogFont->lfFaceName;
		SetDlgItemText(IDC_EDIT4, strFontName);


	}*/


	// TODO: 在此添加控件通知处理程序代码
}


void CAdditionDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CAdditionDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(_T("确定"));
}


void CAdditionDlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


void CAdditionDlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	CString strFontName;
	LOGFONT lf;
	memset(&lf, 0, sizeof(LOGFONT));
	_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("新宋体"));
	CFontDialog fontDlg(&lf);
	if (IDOK == fontDlg.DoModal())
	{
		if (m_font.m_hObject)
			m_font.DeleteObject();
		m_font.CreateFontIndirect(fontDlg.m_cf.lpLogFont);
		GetDlgItem(IDC_EDIT4)->SetFont(&m_font);
		strFontName = fontDlg.m_cf.lpLogFont->lfFaceName;
		SetDlgItemText(IDC_EDIT4, strFontName);


	}
}
