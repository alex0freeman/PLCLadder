#pragma once


// CFindText �Ի���

class CFindText : public CDialogEx
{
	DECLARE_DYNAMIC(CFindText)

public:
	CFindText(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CFindText();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};