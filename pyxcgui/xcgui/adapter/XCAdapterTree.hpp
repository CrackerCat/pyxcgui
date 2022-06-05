#pragma once

#include "pch.h"
#include "xcgui/adapter/XCAdapter.hpp"

namespace xcgui {

	class XCAdapterTree : public XCAdapter
	{
	public:
		XCAdapterTree(HXCGUI handle) {
			m_handle = handle;
		}

		XCAdapterTree() {
			m_handle = XAdTree_Create();
		}
		
		//@��ע �����.  
		//@���� name.c_str() �ֶ�����.
		//@���� ��������ֵ.
		//@����  �����()
		int AddColumn(const std::wstring& name) {
			return XAdTree_AddColumn(m_handle, name.c_str());
		}

		//@��ע ������.  
		//@���� pColName ����,��������ö��ŷֿ�.
		//@���� ����������.
		//@����  ����()
		int SetColumn(const std::wstring& colName) {
			return XAdTree_SetColumn(m_handle, colName.c_str());
		}

		//@��ע ������,������䵽��һ��.  
		//@���� value.c_str() ֵ.
		//@���� nParentID ��ID.
		//@���� insertID ����λ��ID.
		//@���� ������IDֵ.
		//@����  �������ı�()
		int InsertItemText(const std::wstring& value, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XAdTree_InsertItemText(m_handle, value.c_str(), nParentID, insertID);
		}

		//@��ע ������,������䵽ָ����.  
		//@���� name.c_str() �ֶ�����.
		//@���� value.c_str() ֵ.
		//@���� nParentID ��ID.
		//@���� insertID ����λ��ID.
		//@���� ������IDֵ.
		//@����  �������ı���չ()
		int InsertItemTextEx(const std::wstring& name, const std::wstring& value, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XAdTree_InsertItemTextEx(m_handle, name.c_str(), value.c_str(), nParentID, insertID);
		}

		//@��ע ������,������䵽��һ��.  
		//@���� hImage ͼƬ���.
		//@���� nParentID ��ID.
		//@���� insertID ����λ��ID.
		//@���� ������IDֵ.
		//@����  ������ͼƬ()
		int InsertItemImage(HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XAdTree_InsertItemImage(m_handle, hImage, nParentID, insertID);
		}

		//@��ע ������,������䵽ָ����.  
		//@���� name.c_str() �ֶ�����.
		//@���� hImage ͼƬ���.
		//@���� nParentID ��ID.
		//@���� insertID ����λ��ID.
		//@���� ������IDֵ.
		//@����  ������ͼƬ��չ()
		int InsertItemImageEx(const std::wstring& name, HIMAGE hImage, int nParentID = XC_ID_ROOT, int insertID = XC_ID_LAST) {
			return XAdTree_InsertItemImageEx(m_handle, name.c_str(), hImage, nParentID, insertID);
		}

		//@��ע ��ȡ������.  
		//@���� ��������.
		//@����  ȡ������()
		int GetCount() {
			return XAdTree_GetCount(m_handle);
		}

		//@��ע ��ȡ������.  
		//@���� ����������.
		//@����  ȡ������()
		int GetCountColumn() {
			return XAdTree_GetCountColumn(m_handle);
		}

		//@��ע ����������.  
		//@���� nID ��ID.
		//@���� iColumn ������.
		//@���� value.c_str() ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �����ı�()
		bool SetItemText(int nID, int iColumn, const std::wstring& value) {
			return XAdTree_SetItemText(m_handle, nID, iColumn, value.c_str());
		}

		//@��ע �������ļ�����.  
		//@���� nID ��ID.
		//@���� name.c_str() �ֶ�����.
		//@���� value.c_str() ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  �����ı���չ()
		bool SetItemTextEx(int nID, const std::wstring& name, const std::wstring& value) {
			return XAdTree_SetItemTextEx(m_handle, nID, name.c_str(), value.c_str());
		}

		//@��ע ����������.  
		//@���� nID ��ID.
		//@���� iColumn ������.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����ͼƬ()
		bool SetItemImage(int nID, int iColumn, HIMAGE hImage) {
			return XAdTree_SetItemImage(m_handle, nID, iColumn, hImage);
		}

		//@��ע ����������.  
		//@���� nID ��ID.
		//@���� name.c_str() �ֶ�����.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ����ͼƬ��չ()
		bool SetItemImageEx(int nID, const std::wstring& name, HIMAGE hImage) {
			return XAdTree_SetItemImageEx(m_handle, nID, name.c_str(), hImage);
		}

		//@��ע ��ȡ���ı�����.  
		//@���� nID ��ID.
		//@���� iColumn ������.
		//@���� �����ı�����
		//@����  ȡ���ı�()
		std::wstring GetItemText(int nID, int iColumn) {
			auto pText = XAdTree_GetItemText(m_handle, nID, iColumn);
			if (!pText) return L"";
			return pText;
		}

		//@��ע ��ȡ���ı�����.  
		//@���� nID ��ID.
		//@���� name.c_str() �ֶ�����.
		//@���� �����ı�����
		//@����  ȡ���ı���չ()
		std::wstring GetItemTextEx(int nID, const std::wstring& name) {
			auto pText = XAdTree_GetItemTextEx(m_handle, nID, name.c_str());
			if (!pText) return L"";
			return pText;
		}

		//@��ע ��ȡ������.  
		//@���� nID ��ID.
		//@���� iColumn ������.
		//@���� ����ͼƬ���.
		//@����  ȡ��ͼƬ()
		HIMAGE GetItemImage(int nID, int iColumn) {
			return XAdTree_GetItemImage(m_handle, nID, iColumn);
		}

		//@��ע ��ȡ������.  
		//@���� nID ��ID.
		//@���� name.c_str() �ֶ�����.
		//@���� ����ͼƬ���.
		//@����  ȡ��ͼƬ��չ()
		HIMAGE GetItemImageEx(int nID, const std::wstring& name) {
			return XAdTree_GetItemImageEx(m_handle, nID, name.c_str());
		}

		//@��ע ɾ����.  
		//@���� nID ��ID.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ɾ����()
		bool DeleteItem(int nID) {
			return XAdTree_DeleteItem(m_handle, nID);
		}

		//@��ע ɾ��������.  
		//@����  ɾ����ȫ��()
		void DeleteItemAll() {
			XAdTree_DeleteItemAll(m_handle);
		}

		//@��ע ɾ��������,�����������.  
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@����  ɾ����ȫ��()
		void DeleteColumnAll() {
			XAdTree_DeleteColumnAll(m_handle);
		}


	};
}