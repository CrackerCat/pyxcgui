#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"
#include "xcgui/XCLayoutBox.hpp"

namespace xcgui {

	class XCLayoutEle : public XCElement, public XCLayoutBox
	{
	public:
		XCLayoutEle(HELE handle)
		{
			m_handle = handle;
		}

		XCLayoutEle() = default;

		XCLayoutEle(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XLayout_Create(x, y, width, height, parent);
		}

		XCLayoutEle(HXCGUI parent) {
			m_handle = XLayout_CreateEx(parent);
		}

		//@��ע ���ò��ֹ���.  
		//@���� bEnable �Ƿ�����.
		//@����  ����()
		void EnableLayout(bool bEnable) {
			XLayout_EnableLayout(getEleHandle(), bEnable);
		}

		//@��ע �Ƿ��Ѿ����ò��ֹ���  
		//@���� ������ò��ַ���TRUE,���򷵻�FALSE
		//@����  �Ƿ�����()
		bool IsEnableLayout() {
			return XLayout_IsEnableLayout(getEleHandle());
		}

		//@��ע ��ʾ���ֱ߽�.  
		//@���� bEnable �Ƿ���ʾ
		//@����  ��ʾ���ֱ߽�()
		void ShowLayoutFrame(bool bEnable) {
			XLayout_ShowLayoutFrame(getEleHandle(), bEnable);
		}

		//@��ע ��ȡ���,�������ڱ߾��С  
		//@���� ���ؿ��
		//@����  ȡ�ڿ��()
		int GetWidthIn() {
			return XLayout_GetWidthIn(getEleHandle());
		}

		//@��ע ��ȡ�߶�,�������ڱ߾��С  
		//@���� ���ظ߶�
		//@����  ȡ�ڸ߶�()
		int GetHeightIn() {
			return XLayout_GetHeightIn(getEleHandle());
		}



	};
}