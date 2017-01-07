
// AdditionDlg.cpp : ʵ���ļ�
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


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CAdditionDlg �Ի���



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


// CAdditionDlg ��Ϣ��������

BOOL CAdditionDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵������ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ����Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի���������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CAdditionDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CAdditionDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CAdditionDlg::OnBnClickedButton()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
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
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	/*CAddSheet sheet(_T("���Ա�����"));
	sheet.SetWizardMode();*/
	CAddSheet sheet(_T("ʹ��˵��"));
	sheet.DoModal();
}


void CAdditionDlg::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ����ӿؼ�֪ͨ�����������
}


void CAdditionDlg::OnBnClickedButtonT()
{
	/*CString strFontName;
	LOGFONT lf;
	memset(&lf, 0, sizeof(LOGFONT));
	_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("����"));
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


	// TODO: �ڴ����ӿؼ�֪ͨ�����������
}


void CAdditionDlg::OnBnClickedButton4()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
}


void CAdditionDlg::OnBnClickedButton3()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	MessageBox(_T("ȷ��"));
}


void CAdditionDlg::OnBnClickedCancel()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	CDialogEx::OnCancel();
}


void CAdditionDlg::OnBnClickedButton5()
{
	// TODO: �ڴ����ӿؼ�֪ͨ�����������
	CString strFontName;
	LOGFONT lf;
	memset(&lf, 0, sizeof(LOGFONT));
	_tcscpy_s(lf.lfFaceName, LF_FACESIZE, _T("������"));
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