#pragma once
#include "pch.h"
#include "XCObjectUI.h"
#include "XCWindow.h"
#include "XCWidgetLayout.h"

class XCWidget: public XCObjectUI
{
public:
	XCWidget() = default;
	XCWidget(HXCGUI handle);
	// �Ƿ���ʾ
	bool IsShow();

	// ��ʾ
	void Show(bool bShow);

	// ���ò��ֿ���
	void EnableLayoutControl(bool bEnable);

	// �Ƿ񲼾ֿ���
	bool IsLayoutControl();

	// ȡ��Ԫ��
	XCWidget* GetParentEle();

	// ��ȡ������,��������Ԫ�ػ򴰿�,ͨ���˺������Լ���Ƿ��и�
	XCObjectUI* getParent();

	// ȡ���ھ��ϵͳ
	uintptr_t GetHWND();

	// ȡ����
	XCWindow* getWindow();

	// ����Ԫ��ID
	void SetID(int nID);

	// ��ȡԪ��ID
	int GetID();

	// ����Ԫ��UID, ȫ��Ψһ��ʶ��
	void SetUID(int nUID);

	// ��ȡԪ��UID,ȫ��Ψһ��ʶ��
	int GetUID();

	// ����Ԫ��name
	void SetName(const std::wstring& name);

	// ��ȡԪ��name
	std::wstring GetName();

public:
	XCWidgetLayout m_layout;
};

