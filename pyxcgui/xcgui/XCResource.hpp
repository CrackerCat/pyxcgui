#pragma once
#include "pch.h"

namespace xcgui {

	class XCResource
	{
	public:
		// �����ӳټ���;ͼƬ�ļ�,�б���ģ���ļ�
		static void EnableDelayLoad(bool bEnable) {
			XRes_EnableDelayLoad(bEnable);
		}

		// ����Դ�в��ұ���
		static HBKM GetBkM(const std::wstring& name) {
			return XRes_GetBkM(name.c_str());
		}

		// ����Դ�в�����ɫ
		static COLORREF GetColor(const std::wstring& name) {
			return XRes_GetColor(name.c_str());
		}

		// ����Դ�в�������
		static HFONTX GetFont(const std::wstring& name) {
			return XRes_GetFont(name.c_str());
		}

		// ��ȡ��ԴID����ֵ
		static int GetIDValue(const std::wstring& name) {
			return XRes_GetIDValue(name.c_str());
		}

		// ������ԴͼƬ
		static HIMAGE GetImage(const std::wstring& name) {
			return XRes_GetImage(name.c_str());
		}

		// ��ָ������Դ�ļ��в���ͼƬ
		static HIMAGE GetImageEx(const std::wstring& fileName, const std::wstring& name) {
			return XRes_GetImageEx(fileName.c_str(), name.c_str());
		}

		// �����ļ����ػص�����
		static void SetLoadFileCallback(funLoadFile pFun) {
			XRes_SetLoadFileCallback(pFun);
		}

	};
}