#pragma once

#include "pch.h"
#include "xcgui/adapter/XCAdapter.hpp"

namespace xcgui {

	class XCAdapterMap : public XCAdapter
	{
	public:
		XCAdapterMap() {
			m_handle = XAdMap_Create();
		}

		/// @brief ����������. 
		/// @param name.c_str() �ֶγ�. 
		/// @param value.c_str() ֵ. 
		/// @return �ɹ�����TRUE���򷵻�FALSE. 

		bool AddItemText(const std::wstring& name, const std::wstring& value)
		{
			return XAdMap_AddItemText(m_handle, name.c_str(), value.c_str());
		}

		/// @brief �����ͼƬ. 
		/// @param name.c_str() ͼƬ���. 
		/// @param hImage ͼƬ���. 
		/// @return �ɹ�����TRUE���򷵻�FALSE. 
		bool AddItemImage(const std::wstring& name, HIMAGE hImage)
		{
			return XAdMap_AddItemImage(m_handle, name.c_str(), hImage);;
		}

		/// @brief ɾ����
		/// @param name.c_str() �ֶγ�. 
		/// @return �ɹ�����TRUE���򷵻�FALSE. 
		bool DeleteItem(const std::wstring& name)
		{
			return XAdMap_DeleteItem(m_handle, name.c_str());
		}
		/// @brief ȡ������ 
		/// @return ȡ������ 
		int GetCount()
		{
			return XAdMap_GetCount(m_handle);
		}

		/// @brief ȡ���ı� 
		/// @param name.c_str() �ֶγ�.  
		/// @return �����ı�����.
		std::wstring GetItemText(const std::wstring& name)
		{
			auto pText = XAdMap_GetItemText(m_handle, name.c_str());
			if (!pText) return L"";
			return pText;
		}
		/// @brief �����ı�����.
		/// @param name.c_str() �ֶγ�. 
		/// @return ����ͼƬ���. 
		HIMAGE GetItemImage(const std::wstring& name)
		{
			return XAdMap_GetItemImage(m_handle, name.c_str());
		}

		/// @brief �����ı� 
		/// @param name.c_str() �ֶγ�. 
		/// @param value.c_str() ֵ. 
		/// @return �ɹ�����TRUE���򷵻�FALSE.  
		bool SetItemText(const std::wstring& name, const std::wstring& value)
		{
			return XAdMap_SetItemText(m_handle, name.c_str(), value.c_str());
		}
		/// @brief ����ͼƬ 
		/// @param name.c_str() ����ͼƬ 
		/// @param hImage ����ͼƬ 
		/// @return �ɹ�����TRUE���򷵻�FALSE. 
		bool SetItemImage(const std::wstring& name, HIMAGE hImage)
		{
			return XAdMap_SetItemImage(m_handle, name.c_str(), hImage);
		}
	};
}
