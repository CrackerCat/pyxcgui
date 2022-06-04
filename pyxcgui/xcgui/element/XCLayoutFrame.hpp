#pragma once
#include "pch.h"
#include "xcgui/element/XCScrollView.hpp"
#include "xcgui/XCLayoutBox.hpp"

namespace xcgui {


	class XCLayoutFrame : public XCScrollView, public XCLayoutBox
	{

	public:
		XCLayoutFrame(HELE handle)
		{

			m_handle = handle;
		}

		XCLayoutFrame() = default;

		XCLayoutFrame(int x, int y, int width, int height, HXCGUI parent = NULL) {

			m_handle = XLayoutFrame_Create(x, y, width, height, parent);
		}
		XCLayoutFrame(HXCGUI parent) {

			m_handle = XLayoutFrame_CreateEx(parent);
		}

		//@��ע ���ò��ֹ���
		//@���� bEnable �Ƿ�����
		//@����  ����()
		void EnableLayout(bool bEnable) {
			XLayoutFrame_EnableLayout(getEleHandle(), bEnable);
		}

		//@��ע �Ƿ��Ѿ����ò��ֹ���
		//@���� ������ò��ַ���TRUE,���򷵻�FALSE
		//@����  �Ƿ�����()
		bool IsEnableLayout() {
			return XLayoutFrame_IsEnableLayout(getEleHandle());
		}

		//@���� bEnable �Ƿ���ʾ
		//@����  ��ʾ���ֱ߽�()
		void ShowLayoutFrame(bool bEnable) {
			XLayoutFrame_ShowLayoutFrame(getEleHandle(), bEnable);
		}

		//@��ע ��ȡ���,�������ڱ߾��С
		//@���� ���ؿ��
		//@����  ȡ�ڿ��()
		int GetWidthIn() {
			return XLayoutFrame_GetWidthIn(getEleHandle());
		}

		//@��ע ��ȡ�߶�,�������ڱ߾��С
		//@���� ���ظ߶�
		//@����  ȡ�ڸ߶�()
		int GetHeightIn() {
			return XLayoutFrame_GetHeightIn(getEleHandle());
		}


	};
}