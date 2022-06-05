#pragma once

#include "pch.h"
#include "xcgui/adapter/XCAdapter.hpp"

namespace xcgui {

	class XCAdapterListView : public XCAdapter
	{
	public:
		XCAdapterListView(HXCGUI handle) {
			m_handle = handle;
		}

		XCAdapterListView() {
			m_handle = XAdListView_Create();
		}

		//@��ע �����,���������.  
		//@���� hAdapter �������������.
		//@���� pName �ֶ�����.
		//@���� ����������.
		//@���� �����������б���_�������()
		int GroupAddColumn(const std::wstring& name) {
			return XAdListView_Group_AddColumn(m_handle, name.c_str());
		}

		//@��ע �����,�����,����Ĭ����䵽��һ��.  
		//@���� hAdapter �������������.
		//@���� pValue ֵ.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_������ı�()
		int GroupAddItemText(const std::wstring& value, int iPos = -1) {
			return XAdListView_Group_AddItemText(m_handle, value.c_str(), iPos);
		}

		//@��ע �����,�����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� pName �ֶ�����.
		//@���� pValue ֵ.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_������ı���չ()
		int GroupAddItemTextEx(const std::wstring& name, const std::wstring& value, int iPos = -1) {
			return XAdListView_Group_AddItemTextEx(m_handle, name.c_str(), value.c_str(), iPos);
		}

		//@��ע �����,�����,����Ĭ������һ��.  
		//@���� hAdapter �������������.
		//@���� hImage ͼƬ���.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_�����ͼƬ()
		int GroupAddItemImage(HIMAGE hImage, int iPos = -1) {
			return XAdListView_Group_AddItemImage(m_handle, hImage, iPos);
		}

		//@��ע �����,�����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� pName �ֶ�����.
		//@���� hImage ͼƬ���.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_�����ͼƬ��չ()
		int GroupAddItemImageEx(const std::wstring& name, HIMAGE hImage, int iPos = -1)
		{
			return 	XAdListView_Group_AddItemImageEx(m_handle, name.c_str(), hImage, iPos);
		}
		
		//@��ע �����,����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iColumn ������.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_�������ı�()
		bool GroupSetText(int iGroup, int iColumn, const std::wstring& value) {
			return XAdListView_Group_SetText(m_handle, iGroup, iColumn, value.c_str());
		}
		
		//@��ע �����,����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� pName �ֶ���.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_�������ı���չ()
		bool GroupSetTextEx(int iGroup, const std::wstring& name, const std::wstring& value) {
			return XAdListView_Group_SetTextEx(m_handle, iGroup, name.c_str(), value.c_str());
		}

		//@��ע �����,����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iColumn ������.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_������ͼƬ()
		bool GroupSetImage(int iGroup, int iColumn, HIMAGE hImage) {
			return XAdListView_Group_SetImage(m_handle, iGroup, iColumn, hImage);
		}

		//@��ע �����,����ָ��������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� pName �ֶ���.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_������ͼƬ��չ()
		bool GroupSetImageEx(int iGroup, const std::wstring& name, HIMAGE hImage) {
			return XAdListView_Group_SetImageEx(m_handle, iGroup, name.c_str(), hImage);
		}

		//@���� hAdapter �������������
		//@���� iGroup ������
		//@���� iColumn ������
		//@���� �����ı�����
		//@���� �����������б���_��ȡ�ı�()
		std::wstring GroupGetText(int iGroup, int iColumn) {
			auto pText = XAdListView_Group_GetText(m_handle, iGroup, iColumn);
			if (!pText) return L"";
			return pText;
		}
		
		//@���� hAdapter �������������
		//@���� iGroup ������
		//@���� pName �ֶ�����
		//@���� �����ı�����
		//@���� �����������б���_��ȡ�ı���չ()
		std::wstring GroupGetTextEx(int iGroup, const std::wstring& name) {
			return XAdListView_Group_GetTextEx(m_handle, iGroup, name.c_str());
		}
		
		//@���� hAdapter �������������
		//@���� iGroup ������
		//@���� iColumn ������
		//@���� ����ͼƬ���
		//@���� �����������б���_��ȡͼƬ()
		HIMAGE GroupGetImage(int iGroup, int iColumn) {
			return XAdListView_Group_GetImage(m_handle, iGroup, iColumn);
		}


		//@���� hAdapter �������������
		//@���� iGroup ������
		//@���� pName �ֶ�����
		//@���� ����ͼƬ���
		//@���� �����������б���_��ȡͼƬ��չ()
		HIMAGE GroupGetImageEx(int iGroup, const std::wstring& name) {
			return XAdListView_Group_GetImageEx(m_handle, iGroup, name.c_str());
		}

		//@��ע �����,�����.  
		//@���� hAdapter �������������.
		//@���� pName �ֶ�����.
		//@���� ����������.
		//@���� �����������б���_�������()
		int ItemAddColumn(const std::wstring& name) {
			return XAdListView_Item_AddColumn(m_handle, name.c_str());
		}


		//@��ע �����,��ȡ������.  
		//@���� hAdapter �������������.
		//@���� ����������.
		//@���� �����������б���_ȡ������()
		int GroupGetCount() {
			return XAdListView_Group_GetCount(m_handle);
		 }
		
		//@��ע �����,��ȡָ������������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� �ɹ�����������,���򷵻� @ref XC_ID_ERROR.
		//@���� �����������б���_ȡ����������()
		int ItemGetCount(int iGroup) {
			return XAdListView_Item_GetCount(m_handle, iGroup);
		}


		//@��ע �����,�����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� pValue ֵ.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_������ı�()
		int ItemAddItemText(int iGroup, const std::wstring& value, int iPos = -1) {
			return XAdListView_Item_AddItemText(m_handle, iGroup, value.c_str(), iPos);
		}

		//@��ע �����,�����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� pName �ֶ�����.
		//@���� pValue ֵ.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_������ı���չ()
		int ItemAddItemTextEx(int iGroup, const std::wstring& name, const std::wstring& value, int iPos = -1) {
			return XAdListView_Item_AddItemTextEx(m_handle, iGroup, name.c_str(), value.c_str(), iPos);
		}

		
		//@��ע �����,�����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� hImage ͼƬ���.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_�����ͼƬ()
		int ItemAddItemImage(int iGroup, HIMAGE hImage, int iPos = -1) {
			return XAdListView_Item_AddItemImage(m_handle, iGroup, hImage, iPos);
		}


		//@��ע �����,�����,���ָ��������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� pName �ֶ�����.
		//@���� hImage ͼƬ���.
		//@���� iPos ����λ��, -1��ӵ�ĩβ
		//@���� ����������.
		//@���� �����������б���_�����ͼƬ��չ()
		int ItemAddItemImageEx(int iGroup, const std::wstring& name, HIMAGE hImage, int iPos = -1) {
			return 	XAdListView_Item_AddItemImageEx(m_handle, iGroup, name.c_str(), hImage, iPos);
		}

		//@��ע ɾ����,�Զ�ɾ������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_��ɾ����()
		bool GroupDeleteItem(int iGroup) {
			return 	XAdListView_Group_DeleteItem(m_handle, iGroup);
		}
		
		//@��ע ɾ��ָ�������������.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� �����������б���_ɾ��ȫ������()
		void GroupDeleteAllChildItem(int iGroup) {
			XAdListView_Group_DeleteAllChildItem(m_handle, iGroup);
		}

		//@��ע ɾ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_ɾ����()
		bool ItemDeleteItem(int iGroup, int iItem) {
			return 	XAdListView_Item_DeleteItem(m_handle, iGroup, iItem);
		}


		//@��ע ɾ������(��,��,��).  
		//@���� hAdapter �������������.
		//@���� �����������б���_ɾ��ȫ��()
		void DeleteAll() {
			XAdListView_DeleteAll(m_handle);
		}

		//@��ע ɾ�����е���.  
		//@���� hAdapter �������������.
		//@���� �����������б���_ɾ��ȫ����()
		void DeleteAllGroup() {
			return XAdListView_DeleteAllGroup(m_handle);
		}

		//@��ע ɾ�����е���.  
		//@���� hAdapter �������������.
		//@���� �����������б���_ɾ��ȫ����()
		void DeleteAllItem() {
			return XAdListView_DeleteAllItem(m_handle);
		}


		//@��ע ɾ�������.  
		//@���� hAdapter �������������.
		//@���� iColumn ������.
		//@���� �����������б���_��ɾ����()
		void DeleteColumnGroup(int iColumn) {
			XAdListView_DeleteColumnGroup(m_handle, iColumn);
		}

		//@��ע ɾ�������.  
		//@���� hAdapter �������������.
		//@���� iColumn ������.
		//@���� �����������б���_��ɾ����()
		void DeleteColumnItem(int iColumn) {
			XAdListView_DeleteColumnItem(m_handle, iColumn);
		}

		//@��ע �����,��ȡ���ı�����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� �����ı�����
		//@���� �����������б���_��ȡ�ı�()
		std::wstring ItemGetText(int iGroup, int iItem, int iColumn) {
			auto pText = XAdListView_Item_GetText(m_handle, iGroup, iItem, iColumn);
			if (!pText) return L"";
			return pText;
		}

		//@��ע �����,��ȡ���ı�����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� pName �ֶ�����.
		//@���� �����ı�����
		//@���� �����������б���_��ȡ�ı���չ()
		std::wstring ItemGetTextEx(int iGroup, int iItem, const std::wstring& name) {
			auto pText = XAdListView_Item_GetTextEx(m_handle, iGroup, iItem, name.c_str());
			if (!pText) return L"";
			return pText;
		}

		//@��ע �����,��ȡ��ͼƬ���.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� ����ͼƬ���.
		//@���� �����������б���_��ȡͼƬ()
		HIMAGE ItemGetImage(int iGroup, int iItem, int iColumn) {
			return XAdListView_Item_GetImage(m_handle, iGroup, iItem, iColumn);
		}

		//@��ע �����,��ȡ��ͼƬ���.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� ����ͼƬ���.
		//@���� �����������б���_��ȡͼƬ��չ()
		HIMAGE ItemGetImageEx(int iGroup, int iItem, const std::wstring& name) {
			return 	XAdListView_Item_GetImageEx(m_handle, iGroup, iItem, name.c_str());
		}


		//@��ע �����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_�����ı�()
		bool ItemSetText(int iGroup, int iItem, int iColumn, const std::wstring& value) {
			return XAdListView_Item_SetText(m_handle, iGroup, iItem, iColumn, value.c_str());
		}

		//@��ע �����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� pValue ֵ.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_�����ı���չ()
		bool ItemSetTextEx(int iGroup, int iItem, const std::wstring& name, const std::wstring& value) {
			return XAdListView_Item_SetTextEx(m_handle, iGroup, iItem, name.c_str(), value.c_str());
		}

		//@��ע �����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� iColumn ������.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_����ͼƬ()
		bool ItemSetImage(int iGroup, int iItem, int iColumn, HIMAGE hImage) {
			return XAdListView_Item_SetImage(m_handle, iGroup, iItem, iColumn, hImage);
		}

		//@��ע �����,�������ָ����.  
		//@���� hAdapter �������������.
		//@���� iGroup ������.
		//@���� iItem ������.
		//@���� pName �ֶγ�.
		//@���� hImage ͼƬ���.
		//@���� �ɹ�����TRUE���򷵻�FALSE.
		//@���� �����������б���_����ͼƬ��չ()
		bool ItemSetImageEx(int iGroup, int iItem, const std::wstring& name, HIMAGE hImage) {
			return XAdListView_Item_SetImageEx(m_handle, iGroup, iItem, name.c_str(), hImage);
		}

	};
}