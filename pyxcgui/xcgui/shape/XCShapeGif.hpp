#pragma once
#include "pch.h"
#include "xcgui/shape/XCShape.hpp"

namespace xcgui {

	class XCShapeGif : public XCShape
	{
	public:
		XCShapeGif() = default;

		XCShapeGif(HXCGUI handle)
		{
			m_handle = handle;
		}

		XCShapeGif(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			this->Create(x, y, cx, cy, hParent);
		}

		HXCGUI Create(int x, int y, int cx, int cy, HXCGUI hParent = NULL) {
			m_handle = XShapeGif_Create(x, y, cx, cy, hParent);
			return m_handle;
		}

		//@��ע ����GIFͼƬ.  
		//@���� hImage ͼƬ���.
		//@����  ��ͼƬ()
		void SetImage(HIMAGE hImage) { 
			XShapeGif_SetImage(m_handle, hImage);
		}

		//@��ע ��ȡͼƬ���.  
		//@���� ����ͼƬ���.
		//@����  ȡͼƬ()
		HIMAGE GetImage() { 
			return XShapeGif_GetImage(m_handle);
		}
	};
}