#pragma once
#include "header.h"

class CWaitableTimerDlg
{
public:
	CWaitableTimerDlg(void);
public:
	~CWaitableTimerDlg(void);
	static INT_PTR CALLBACK DlgProc(HWND hWnd, UINT mess, WPARAM wParam, LPARAM lParam);		
	static CWaitableTimerDlg* ptr;
	void Cls_OnClose(HWND hwnd);
	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
	void Cls_OnSize(HWND hwnd, UINT state, int cx, int cy);
	void OnTrayIcon(WPARAM wp, LPARAM lp); // обработчик пользовательского сообщени€
	HWND hButton, hEdit4, hSpin1, hEdit2, hSpin2, hEdit3, hSpin3, hDialog, hList1, hList2;	
	HICON hIcon;
	PNOTIFYICONDATA pNID;
};
