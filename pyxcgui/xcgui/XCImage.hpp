#pragma once
#include "pch.h"
#include "XCObject.hpp"

namespace xcgui {

	class XCImage : public XCObject
	{
	public:
		XCImage()
			: XCObject()
		{
		}

		XCImage(HIMAGE ele)
			:XCObject((HXCGUI)ele)
		{
		}


		HIMAGE getImageHandle() const
		{
			return (HIMAGE)m_handle;
		}

		// ���ش�ͼƬԴ
		HIMAGE loadSrc(HIMAGE hImageSrc) {
			m_handle = XImage_LoadSrc(hImageSrc);
			return (HIMAGE)m_handle;
		}

		// ���ش��ļ�
		HIMAGE LoadFile(const std::wstring& fileName) { 
			m_handle = XImage_LoadFile(fileName.c_str()); 
			return (HIMAGE)m_handle;
		}

		// ����ͼƬ���ļ�,����ӦͼƬ
		HIMAGE LoadFileAdaptive(const std::wstring& fileName, int leftSize, int topSize, int rightSize, int bottomSize) {
			m_handle = XImage_LoadFileAdaptive(fileName.c_str(), leftSize, topSize, rightSize, bottomSize);
			return (HIMAGE)m_handle;
		}

		// ����ͼƬ,ָ����λ�ü���С
		HIMAGE LoadFileRect(const std::wstring& fileName, int x, int y, int cx, int cy) {
			m_handle = XImage_LoadFileRect(fileName.c_str(), x, y, cx, cy);
			return (HIMAGE)m_handle;
		}




	};

}
