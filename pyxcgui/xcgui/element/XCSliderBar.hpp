#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCSliderBar : public XCElement
	{
	public:
		XCSliderBar(HELE handle)
		{
			m_handle = handle;
		}

		XCSliderBar() = default;

		XCSliderBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XSliderBar_Create(x, y, width, height, parent);
		}

		//@��ע ���û�����Χ.  
		//@���� range ��Χ.
		//@����  �÷�Χ()
		void SetRange(int range) {
			XSliderBar_SetRange(getEleHandle(), range);
		}

		//@��ע ��ȡ������Χ.  
		//@���� ���ع�����Χ.
		//@����  ȡ��Χ()
		int GetRange() {
			return XSliderBar_GetRange(getEleHandle());
		}

		//@��ע ���ý�����ͼ.  
		//@���� hImage ͼƬ���.
		//@����  �ý���ͼƬ()
		void SetImageLoad(HIMAGE hImage) {
			XSliderBar_SetImageLoad(getEleHandle(), hImage);
		}

		//@��ע ���û��鰴ť���.  
		//@���� width ���.
		//@����  �û�����()
		void SetButtonWidth(int width) {
			XSliderBar_SetButtonWidth(getEleHandle(), width);
		}

		//@��ע ���û��鰴ť�߶�.  
		//@���� height �߶�.
		//@����  �û���߶�()
		void SetButtonHeight(int height) {
			XSliderBar_SetButtonHeight(getEleHandle(), height);
		}

		//@��ע ���õ�ǰ���ȵ�.  
		//@���� pos ���ȵ�.
		//@����  �õ�ǰλ��()
		void SetPos(int pos) {
			XSliderBar_SetPos(getEleHandle(), pos);
		}

		//@��ע ��ȡ��ǰ���ȵ�.  
		//@���� ���ص�ǰ���ȵ�.
		//@����  ȡ��ǰλ��()
		int GetPos() {
			return XSliderBar_GetPos(getEleHandle());
		}

		//@��ע ��ȡ���鰴ť.  
		//@���� ��ť���.
		//@����  ȡ����()
		HELE GetButton() {
			return XSliderBar_GetButton(getEleHandle());
		}

		//@��ע ����ˮƽ��ֱ.  
		//@���� bHorizon ˮƽ��ֱ.
		//@����  ����ˮƽ()
		void EnableHorizon(bool bHorizon) {
			XSliderBar_EnableHorizon(getEleHandle(), bHorizon);
		}

	};
}