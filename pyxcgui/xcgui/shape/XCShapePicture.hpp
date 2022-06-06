#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapePicture : public XCShape
	{
	public:
		XCShapePicture() = default;

		XCShapePicture(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapePicture(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			m_handle = XShapePic_Create(x, y, cx, cy, hParent);
			return m_handle;
		}
		
		//@��ע ����ͼƬ.  
		//@���� hImage ͼƬ���.
		//@����  ��ͼƬ()
		void SetImage(HIMAGE hImage) { 
			XShapePic_SetImage(m_handle, hImage); 
		}
		
		//@��ע ��ȡͼƬ���  
		//@���� ����ͼƬ���.
		//@����  ȡͼƬ()
		HIMAGE GetImage() { 
			return XShapePic_GetImage(m_handle);
		}
	};
}