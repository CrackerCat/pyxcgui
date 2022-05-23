#pragma once
#include "pch.h"

struct XCLayoutSizeInfo
{
	layout_size_ sizeType;
	int size;
};

class XCWidgetLayout
{
public:
	XCWidgetLayout(HXCGUI handle);

	// ǿ�ƻ���
	void EnableWrap(bool bWrap);

	// ����ˮƽ��ֱ���ֱ任, ��������(���,�߶�,��С���,��С�߶�)
	void EnableSwap(bool bEnable);

	// �򷴷������
	void EnableFloat(bool bFloat);

	// ���ÿ��
	void SetWidth(const XCLayoutSizeInfo& sizeInfo);

	// ���ø߶�
	void SetHeight(const XCLayoutSizeInfo& sizeInfo);

	// ȡ���
	XCLayoutSizeInfo* GetWidth();

	// ȡ�߶���Ϣ
	XCLayoutSizeInfo* GetHeight();

	// ����ˮƽ��ֱ��仯����
	void SetAlign(layout_align_axis_ nAlign);

	// ������_������
	void SetMargin(const marginSize_& marginInfo);

	// ������_ȡ����
	marginSize_* GetMargin();

	// ���ƴ�С�����������Ч(�Զ�, ��丸, ����, �ٷֱ�)
	void SetMinSize(int width, int height);

	// ���λ��, ֵ���ڵ���0��Ч
	void SetPosition(int left, int top, int right, int bottom);

protected:
	HXCGUI m_handle;
	
};

