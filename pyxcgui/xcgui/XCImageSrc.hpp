#pragma once
#include "pch.h"
#include "XCObject.hpp"
#include "XCWindow.hpp"

namespace xcgui {

	class XCImageSrc : public XCObject
	{
	public:
		XCImageSrc()
			: XCObject()
		{
		}

		XCImageSrc(HIMAGE handle)
			:XCObject((HXCGUI)handle)
		{
		}

		HIMAGE getImageSrcHandle() const
		{
			return (HIMAGE)m_handle;
		}

		//  ����ͼƬ���ļ�
		HIMAGE LoadFile(const std::wstring& fileName) { 
			m_handle = XImgSrc_LoadFile(fileName.c_str());
			return (HIMAGE)m_handle;
		}

		// ����ͼƬ,ָ����λ�ü���С.  
		HIMAGE LoadFileRect(const std::wstring& fileName, int x, int y, int cx, int cy) { 
			m_handle = XImgSrc_LoadFileRect(fileName.c_str(), x, y, cx, cy);
			return (HIMAGE)m_handle;
		}

		// ����ͼƬ����Դ.  
		HIMAGE LoadRes(int id, const std::wstring& typeName, HMODULE hModule) { 
			//m_handle = XImgSrc_LoadRes(id, typeName.c_str(), hModule);
			return (HIMAGE)m_handle;
		}
		

		// ����ͼƬ��ZIPѹ����. 
		HIMAGE LoadZip(const std::wstring& zipFileName, const std::wstring& fileName, const std::wstring& password) { 
			m_handle = XImgSrc_LoadZip(zipFileName.c_str(), fileName.c_str(), password.c_str());
			return (HIMAGE)m_handle;
		}
		
		// ����ZIPͼƬ,ָ����λ�ü���С
		HIMAGE LoadZipRect(const std::wstring& zipFileName, const std::wstring& fileName, const std::wstring& password, int x, int y, int cx, int cy) {
			m_handle = XImgSrc_LoadZipRect(zipFileName.c_str(), fileName.c_str(), password.c_str(), x, y, cx, cy);
			return (HIMAGE)m_handle;
		}
		
		// ���ش��ڴ�ZIP
		HIMAGE LoadZipMem(const std::string& data, const std::wstring& fileName, const std::wstring& password) {
			m_handle = XImgSrc_LoadZipMem((void*)data.c_str(), data.size(), fileName.c_str(), password.c_str());
			return (HIMAGE)m_handle;
		}
		

		// ���ش��ڴ�
		HIMAGE LoadMemory(const std::string& data) { 
			m_handle = XImgSrc_LoadMemory((void*)data.c_str(), data.size());
			return (HIMAGE)m_handle;
		}
		
		// ���ش��ڴ�ָ������
		HIMAGE LoadMemoryRect(const std::string& data, int x, int y, int cx, int cy) { 
			m_handle = XImgSrc_LoadMemoryRect((void*)data.c_str(), data.size(), x, y, cx, cy);
			return (HIMAGE)m_handle;
		}
		
		// ����ͼƬ��GDI+��Image����
		HIMAGE LoadFromImage(void* pImage) { 
			m_handle = XImgSrc_LoadFromImage(pImage);
			return (HIMAGE)m_handle;;
		}

		// �����ļ�ͼ��,��һ��EXE�ļ���DLL�ļ���ͼ���ļ�;����:*.exe�ļ���ͼ��
		HIMAGE LoadFromExtractIcon(const std::wstring& fileName) {
			m_handle = XImgSrc_LoadFromExtractIcon(fileName.c_str());
			return (HIMAGE)m_handle;
		}


		// ����һ���Ų�ͼƬ���,��һ�����е�ͼ����HICON.  
		HIMAGE LoadFromHICON(HICON hIcon) { 
			m_handle = XImgSrc_LoadFromHICON(hIcon);
			return (HIMAGE)m_handle;
		}

		// ����һ���Ų�ͼƬ���,��һ�����е�λͼ���HBITMAP.  
		HIMAGE LoadFromHBITMAP(HBITMAP hBitmap) { 
			m_handle = XImgSrc_LoadFromHBITMAP(hBitmap);
			return (HIMAGE)m_handle;
		}

		// ���û�ر��Զ�����,����UIԪ�ع���ʱ��Ч  
		void EnableAutoDestroy(bool bEnable) { 
			XImgSrc_EnableAutoDestroy((HIMAGE)m_handle, bEnable);
		}

		// ��ȡͼƬ���
		int GetWidth() { 
			return XImgSrc_GetWidth((HIMAGE)m_handle);
		}

		// ��ȡͼƬ�߶�.
		int GetHeight() { 
			return XImgSrc_GetHeight((HIMAGE)m_handle);
		}
		
		// ��ȡͼƬ�ļ��� 
		std::wstring GetFile() { 
			auto pFile = XImgSrc_GetFile((HIMAGE)m_handle);
			if (!pFile)
				return L"";
			return pFile;
		}

		// �������ü���.  
		void AddRef() { 
			XImgSrc_AddRef((HIMAGE)m_handle);
		}
		
		// �ͷ����ü���,�����ü���Ϊ0ʱ,�Զ�����
		void Release() { 
			XImgSrc_Release((HIMAGE)m_handle);
		}
		

		// ��ȡ���ü���.
		int GetRefCount() { 
			return XImgSrc_GetRefCount((HIMAGE)m_handle);
		}
		
		// ǿ������ͼƬ, ����ʹ��, ����ʹ��
		void Destroy() { 
			XImgSrc_Destroy((HIMAGE)m_handle);
		}
	};

}
