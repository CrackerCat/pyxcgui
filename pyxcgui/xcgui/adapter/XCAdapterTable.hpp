#pragma once

#include "pch.h"
#include "xcgui/adapter/XCAdapter.hpp"

namespace xcgui {

	class XCAdapterTable : public XCAdapter
	{
	public:
		XCAdapterTable() {
			m_handle = XAdTable_Create();
		}

		//@��ע �����ݽ�������.  
		//@���� hAdapter �������������.
		//@���� iColumn Ҫ�������������
		//@���� bAscending �Ƿ�������ʽ����.
		//@���� ������������_����()
		void Sort(int iColumn, bool bAscending) {
			XAdTable_Sort(m_handle, iColumn, bAscending);
		}

		//@��ע ��ȡ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� �������������� @ref adapter_date_type_ .
		//@���� ������������_ȡ����������()
		adapter_date_type_ GetItemDataType(int iItem, int iColumn) {
			return XAdTable_GetItemDataType(m_handle, iItem, iColumn);
		}

		//@��ע ��ȡ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� �������������� @ref adapter_date_type_ .
		//@���� ������������_ȡ������������չ()
		adapter_date_type_  GetItemDataTypeEx(int iItem, const std::wstring& name)
		{
			return XAdTable_GetItemDataTypeEx(m_handle, iItem, name.c_str());
		}

		//@��ע ���������.  
		//@���� hAdapter �������������.
		//@���� pName �ֶγ�.
		//@���� ����������.
		//@���� ������������_�����()
		int AddColumn(const std::wstring& name) {
			return XAdTable_AddColumn(m_handle, name.c_str());
		}


		//@��ע ������.  
		//@���� hAdapter �������������.
		//@���� pColName ����,��������ö��ŷֿ�.
		//@���� ����������.
		//@���� ������������_����()
		int SetColumn(const std::wstring& colName) {
			return XAdTable_SetColumn(m_handle, colName.c_str());
		}

		//@��ע ���������,Ĭ��ֵ�ŵ���һ��.  
		//@���� hAdapter �������������.
		//@���� pValue ֵ.
		//@���� ����������ֵ.
		//@���� ������������_������ı�()
		int AddItemText(const std::wstring& value)
		{
			return XAdTable_AddItemText(m_handle, value.c_str());
		}

		//@��ע ���������,���ָ��������.  
		//@���� hAdapter �������������.
		//@���� pName �ֶγ�.
		//@���� pValue ֵ.
		//@���� ����������.
		//@���� ������������_������ı���չ()
		int AddItemTextEx(const std::wstring& name, const std::wstring& value) {
			return XAdTable_AddItemTextEx(m_handle, name.c_str(), value.c_str());
		}


		//@��ע ���������,Ĭ��ֵ�ŵ���һ��.  
		//@���� hAdapter �������������.
		//@���� hImage ͼƬ���.
		//@���� ����������ֵ.
		//@���� ������������_�����ͼƬ()
		int AddItemImage(HIMAGE hImage) {
			return XAdTable_AddItemImage(m_handle, hImage);
		}


		//@��ע ���������,�����ָ��������.  
		//@���� hAdapter �������������.
		//@���� pName �ֶγ�.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_�����ͼƬ��չ()
		int AddItemImageEx(const std::wstring& name, HIMAGE hImage) {
			return XAdTable_AddItemImageEx(m_handle, name.c_str(), hImage);
		}

		//@��ע ����������,����һ������.  
		//@���� hAdapter �������������.
		//@���� iItem ����λ������.
		//@���� pValue ֵ.
		//@���� ����������.
		//@���� ������������_�������ı�()
		int  InsertItemText(int iItem, const std::wstring& value) {
			return XAdTable_InsertItemText(m_handle, iItem, value.c_str());
		}


		//@��ע ����������,�����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iItem ����λ������.
		//@���� pName �ֶγ�.
		//@���� pValue ֵ.
		//@���� ����������.
		//@���� ������������_�������ı���չ()
		int InsertItemTextEx(int iItem, const std::wstring& name, const std::wstring& value) {
			return XAdTable_InsertItemTextEx(m_handle, iItem, name.c_str(), value.c_str());
		}


		//@��ע ����������,����һ������.  
		//@���� hAdapter �������������.
		//@���� iItem ����λ������.
		//@���� hImage ͼƬ���.
		//@���� ����������.
		//@���� ������������_������ͼƬ()
		int _InsertItemImage(int iItem, HIMAGE hImage) {
			return XAdTable_InsertItemImage(m_handle, iItem, hImage);
		}


		//@��ע ����������,�����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iItem ����λ������.
		//@���� pName �ֶγ�.
		//@���� hImage ͼƬ���.
		//@���� ����������.
		//@���� ������������_������ͼƬ��չ()
		int InsertItemImageEx(int iItem, const std::wstring& name, HIMAGE hImage) {
			return 	XAdTable_InsertItemImageEx(m_handle, iItem, name.c_str(), hImage);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_�����ı�()
		bool SetItemText(int iItem, int iColumn, const std::wstring& value) {
			return XAdTable_SetItemText(m_handle, iItem, iColumn, value.c_str());
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_�����ı���չ()
		bool SetItemTextEx(int iItem, const std::wstring& name, const std::wstring& value) {
			return XAdTable_SetItemTextEx(m_handle, iItem, name.c_str(), value.c_str());
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� nValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_��������ֵ()
		bool SetItemInt(int iItem, int iColumn, int nValue) {
			return XAdTable_SetItemInt(m_handle, iItem, iColumn, nValue);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� nValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_��������ֵ��չ()
		bool  SetItemIntEx(int iItem, const std::wstring& name, int nValue) {
			return XAdTable_SetItemIntEx(m_handle, iItem, name.c_str(), nValue);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� fValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_�����ֵ()
		bool SetItemFloat(int iItem, int iColumn, float nValue) {
			return XAdTable_SetItemFloat(m_handle, iItem, iColumn, nValue);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� fValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_�����ֵ��չ()
		bool  SetItemFloatEx(int iItem, const std::wstring& name, float nValue) {
			return XAdTable_SetItemFloatEx(m_handle, iItem, name.c_str(), nValue);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_����ͼƬ()
		bool SetItemImage(int iItem, int iColumn, HIMAGE hImage) {
			return XAdTable_SetItemImage(m_handle, iItem, iColumn, hImage);
		}


		//@��ע ����������.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_����ͼƬ��չ()
		bool SetItemImageEx(int iItem, const std::wstring& name, HIMAGE hImage) {
			return XAdTable_SetItemImageEx(m_handle, iItem, name.c_str(), hImage);
		}


		//@��ע ɾ����.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ɾ����()
		bool DeleteItem(int iItem) {
			return XAdTable_DeleteItem(m_handle, iItem);
		}

		//@��ע ɾ�������.  
		//@���� hAdapter �������������.
		//@���� iItem ����ʼ����.
		//@���� nCount ɾ��������.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ɾ������չ()
		bool DeleteItemEx(int iItem, int nCount) {
			return XAdTable_DeleteItemEx(m_handle, iItem, nCount);
		}


		//@��ע ɾ��������.  
		//@���� hAdapter �������������.
		//@���� ������������_ɾ����ȫ��()
		void DeleteItemAll() {
			XAdTable_DeleteItemAll(m_handle);
		}


		//@��ע ɾ��������,���������������.  
		//@���� hAdapter �������������.
		//@���� ������������_ɾ����ȫ��()
		void DeleteColumnAll() {
			XAdTable_DeleteColumnAll(m_handle);
		}


		//@��ע ��ȡ������.  
		//@���� hAdapter �������������.
		//@���� ��������.
		//@���� ������������_ȡ������()
		int GetCount() {
			return XAdTable_GetCount(m_handle);
		}


		//@��ע ��ȡ������.  
		//@���� hAdapter �������������.
		//@���� ����������.
		//@���� ������������_ȡ������()
		int GetCountColumn() {
			return XAdTable_GetCountColumn(m_handle);
		}


		//@��ע ��ȡ���ı�����.  
		//@���� hAdapter �������������
		//@���� iItem ������
		//@���� iColumn ������
		//@���� �����ı�����
		//@���� ������������_ȡ���ı�()
		std::wstring GetItemText(int iItem, int iColumn) {
			auto pText = XAdTable_GetItemText(m_handle, iItem, iColumn);
			if (!pText) {
				return L"";
			}
			return pText;
		}

		//@��ע ��ȡ���ı�����.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� �����ı�����
		//@���� ������������_ȡ���ı���չ()
		std::wstring GetItemTextEx(int iItem, const std::wstring& name) {
			auto pText = XAdTable_GetItemTextEx(m_handle, iItem, name.c_str());
			if (!pText) return L"";
			return pText;
		}


		//@��ע ��ȡ��ͼƬ���.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� ����ͼƬ���.
		//@���� ������������_ȡ��ͼƬ()
		HIMAGE GetItemImage(int iItem, int iColumn) {
			return XAdTable_GetItemImage(m_handle, iItem, iColumn);
		}


		//@��ע ��ȡ��ͼƬ���.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� ����ͼƬ���.
		//@���� ������������_ȡ��ͼƬ��չ()
		HIMAGE GetItemImageEx(int iItem, const std::wstring& name) {
			return XAdTable_GetItemImageEx(m_handle, iItem, name.c_str());
		}


		//@��ע ��ȡ��ֵ.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� pOutValue ���շ���ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ȡ������ֵ()
		bool GetItemInt(int iItem, int iColumn, int* pOutValue) {
			return XAdTable_GetItemInt(m_handle, iItem, iColumn, pOutValue);
		}


		//@��ע ��ȡ��ֵ.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� pOutValue ���շ���ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ȡ������ֵ��չ()
		bool GetItemIntEx(int iItem, const std::wstring& name, int* pOutValue) {
			return XAdTable_GetItemIntEx(m_handle, iItem, name.c_str(), pOutValue);
		}


		//@��ע ��ȡ��ֵ.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� pOutValue ���շ���ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ȡ���ֵ()
		bool GetItemFloat(int iItem, int iColumn, float* pOutValue) {
			return XAdTable_GetItemFloat(m_handle, iItem, iColumn, pOutValue);
		}


		//@��ע ��ȡ��ֵ.  
		//@���� hAdapter �������������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� pOutValue ���շ���ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� ������������_ȡ���ֵ��չ()
		bool GetItemFloatEx(int iItem, const std::wstring& name, float* pOutValue) {
			return XAdTable_GetItemFloatEx(m_handle, iItem, name.c_str(), pOutValue);
		}
	};

}