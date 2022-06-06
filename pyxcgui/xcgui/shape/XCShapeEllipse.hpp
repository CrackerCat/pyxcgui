#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeEllipse : public XCShape
	{
	public:
		XCShapeEllipse() = default;

		XCShapeEllipse(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeEllipse(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			m_handle = XShapeEllipse_Create(x, y, cx, cy, hParent);
			return m_handle;
		}

		//@��ע ���ñ߿���ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �ñ߿�ɫ()
		void SetBorderColor(COLORREF color) { 
			XShapeEllipse_SetBorderColor(m_handle, color); 
		}

		//@��ע ���������ɫ.  
		//@���� color ��ɫֵ, ��ʹ�ú�: RGBA()
		//@����  �����ɫ()
		void SetFillColor(COLORREF color) { 
			XShapeEllipse_SetFillColor(m_handle, color); 
		}

		//@��ע ���û���Բ�߿�.  
		//@���� bEnable �Ƿ�����.
		//@����  ���ñ߿�()
		void EnableBorder(bool bEnable) { 
			XShapeEllipse_EnableBorder(m_handle, bEnable); 
		}
		
		//@��ע �������Բ.  
		//@���� bEnable �Ƿ�����.
		//@����  �������()
		void EnableFill(bool bEnable) { 
			XShapeEllipse_EnableFill(m_handle, bEnable); 
		}
	};
}