#pragma once
#include "pch.h"
#include "XCObjectUI.h"
#include "XCWindow.h"

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
};

