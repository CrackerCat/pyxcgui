#pragma once
#include "pch.h"
#include "XCObject.hpp"

namespace xcgui {

	class XCDesigner
	{
	public:
		static HXCGUI LoadLayout(const std::wstring& fileName, HXCGUI hParent = NULL, HWND hAttachWnd = NULL) {
			return XC_LoadLayout(fileName.c_str(), hParent, hAttachWnd);
		}

		static HXCGUI LoadLayoutFromString(const std::string& xml, HXCGUI hParent = NULL, HWND hAttachWnd = NULL) {
			return XC_LoadLayoutFromStringUtf8(xml.c_str(), hParent, hAttachWnd);
		}

		static HXCGUI LoadLayoutZip(const std::wstring& zipFileName,
			const std::wstring& fileName,
			const std::wstring& password, HXCGUI hParent = NULL, HWND hAttachWnd = NULL
		)
		{
			return XC_LoadLayoutZip(zipFileName.c_str(), fileName.c_str(), password.c_str(), hParent, hAttachWnd);
		}

		static HXCGUI LoadLayoutZipMem(const std::string& data,
			const std::wstring& fileName,
			const std::wstring& password,
			HXCGUI 	hParent = NULL,
			HWND 	hAttachWnd = NULL
		) 
		{
			return XC_LoadLayoutZipMem((void*)data.c_str(), data.size(),
				fileName.c_str(), password.c_str(), hParent, hAttachWnd);
		}

		static bool LoadResource(const std::wstring& fileName) {
			return XC_LoadResource(fileName.c_str());
		}

		static bool LoadResourceString(const std::string& xml, const std::wstring& fileName) {
			return XC_LoadResourceFromStringUtf8(xml.c_str(), fileName.c_str());
		}

		static bool LoadResourceZip(const std::wstring& zipFileName,
			const std::wstring& fileName,
			const std::wstring& password
		)
		{
			return XC_LoadResourceZip(zipFileName.c_str(), fileName.c_str(), password.c_str());
		}

		static bool LoadResourceZipMem(const std::string& data,
			const std::wstring& fileName,
			const std::wstring& password) 
		{
			return XC_LoadResourceZipMem((void*)data.c_str(), data.size(),
				fileName.c_str(), password.c_str());
		}

		static bool LoadStyle(const std::wstring& fileName) {
			return XC_LoadStyle(fileName.c_str());
		}

		static bool LoadStyleString(const std::string& xml, const std::wstring& fileName) {
			return XC_LoadStyleFromStringUtf8(xml.c_str(), fileName.c_str());
		}

		static bool LoadStyleZip(const std::wstring& zipFileName,
			const std::wstring& fileName,
			const std::wstring& password
		)
		{
			return XC_LoadStyleZip(zipFileName.c_str(), fileName.c_str(), password.c_str());
		}

		static bool LoadStyleZipMem(const std::string& data,
			const std::wstring& fileName,
			const std::wstring& password)
		{
			return XC_LoadStyleZipMem((void*)data.c_str(), data.size(),
				fileName.c_str(), password.c_str());
		}


	};
}
