#pragma once
#include "pch.h"

namespace xcgui {

	using HTNODE = void*;

	class XCTemplateNode 
	{
	public:
		XCTemplateNode() = default;

		XCTemplateNode(HTNODE handle) {
			m_handle = handle;
		}


		XCTemplateNode(XC_OBJECT_TYPE nType) {
			m_handle = XTemp_CreateNode(nType);
		}

		XCTemplateNode(const XCTemplateNode& cloneNode) {
			m_handle = XTemp_CloneNode(cloneNode.getHandle());
		}


		HTNODE CloneNode(HTNODE otherNode) {
			m_handle = XTemp_CloneNode(otherNode);
			return m_handle;
		}


		HTNODE GetNode(int itemId) {
			return XTemp_GetNode(m_handle, itemId);
		}


		bool AddNode(HTNODE childNode) {
			return XTemp_AddNode(m_handle, childNode);
		}


		bool SetNodeAttribute(const std::wstring& name, const std::wstring& value) {
			return XTemp_SetNodeAttribute(m_handle, name.c_str(), value.c_str());
		}

		bool SetNodeAttributeEx(int itemId, std::wstring& name, const std::wstring& value) {
			return XTemp_SetNodeAttributeEx(m_handle, itemId, name.c_str(), value.c_str());
		}

		HTNODE getHandle() const {
			return m_handle;
		}
	protected:
		HTNODE m_handle;
	};

	class XCListItemTemplate
	{

	public:
		XCListItemTemplate() = default;

		XCListItemTemplate(HTEMP handle)
		{

			m_handle = handle;
		}

		XCListItemTemplate(listItemTemp_type_ tempType) {

			m_handle = XTemp_Create(tempType);
		}

		//@��ע �б���ģ���ļ�����
		//@���� nType ģ������,֧������: \n
		//@���� pFileName �ļ���.
		//@���� ����ģ����Ϣ.
		//@���� ��ģ��_���ش��ļ�()
		HTEMP Load(listItemTemp_type_ nType, const std::wstring& fileName) {
			m_handle = XTemp_Load(nType, fileName.c_str());
			return m_handle;
		}

		//@��ע �����б���ģ���zipѹ������
		//@���� nType ģ������,֧������: \n
		//@���� pZipFile zip�ļ�
		//@���� pFileName �ļ���
		//@���� pPassword zip����
		//@���� ����ģ����.
		//@���� ��ģ��_���ش�ZIP()
		HTEMP LoadZip(listItemTemp_type_ nType, const std::wstring& zipFile, 
			const std::wstring& fileName, const std::wstring& password) 
		{
			m_handle = XTemp_LoadZip(nType, zipFile.c_str(), fileName.c_str(), password.c_str());
			return m_handle;
		}

		//@��ע �����б���ģ����ڴ�zipѹ������
		//@���� nType ģ������,֧������, ֻ��ѡһ��: \n
		//@���� data �ڴ��ָ��
		//@���� length �ڴ���С,�ֽ�Ϊ��λ
		//@���� pFileName �ļ���
		//@���� pPassword zip����
		//@���� ����ģ����.
		//@���� ��ģ��_���ش��ڴ�ZIP()
		HTEMP LoadZipMem(listItemTemp_type_ nType, const std::string& data,
			const std::wstring& fileName, const std::wstring& password) 
		{
			m_handle = XTemp_LoadZipMem(nType, (void*)data.c_str(), data.size(), fileName.c_str(), password.c_str());
			return m_handle;
		}

		//@��ע �����б���ģ����ļ�
		//@���� nType ģ������, ֧������, ֻ��ѡһ��: \n 
		//@���� pFileName �ļ���
		//@���� pOutTemp1 ����ģ����1, ��ģ��
		//@���� pOutTemp2 ����ģ����2, �б�ͷģ����б�����ģ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@���� ��ģ��_���ش��ļ���չ()
		static bool LoadEx(listItemTemp_type_ nType, const std::wstring& fileName, HTEMP* pOutTemp1, HTEMP* pOutTemp2) {
			return XTemp_LoadEx(nType, fileName.c_str(), pOutTemp1, pOutTemp2);
		}

		//@��ע �����б���ģ���zipѹ������
		//@���� nType ģ������, ֧������: \n 
		//@���� pZipFile zip�ļ�
		//@���� pFileName �ļ���
		//@���� pPassword zip����
		//@���� pOutTemp1 ����ģ����1, ��ģ��
		//@���� pOutTemp2 ����ģ����2, �б�ͷģ����б�����ģ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@���� ��ģ��_���ش�ZIP��չ()
		static bool LoadZipEx(listItemTemp_type_ nType, const std::wstring& zipFile, 
			const std::wstring& fileName, const std::wstring& password, HTEMP* pOutTemp1, HTEMP* pOutTemp2) 
		{
			return XTemp_LoadZipEx(nType, zipFile.c_str(), fileName.c_str(), password.c_str(), pOutTemp1, pOutTemp2);
		}

		//@��ע �����б���ģ����ڴ�zipѹ������
		//@���� nType ģ������, ֧������: \n 
		//@���� data �ڴ��ָ��
		//@���� length �ڴ���С,�ֽ�Ϊ��λ
		//@���� pFileName �ļ���
		//@���� pPassword zip����
		//@���� pOutTemp1 ����ģ����1, ��ģ��
		//@���� pOutTemp2 ����ģ����2, �б�ͷģ����б�����ģ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@���� ��ģ��_���ش��ڴ�ZIP��չ()
		static bool LoadZipMemEx(listItemTemp_type_ nType, const std::string& data, const std::wstring& fileName, 
			const std::wstring& password, HTEMP* pOutTemp1, HTEMP* pOutTemp2) 
		{
			return XTemp_LoadZipMemEx(nType, (void*)data.c_str(), data.size(), 
				fileName.c_str(), password.c_str(), pOutTemp1, pOutTemp2);
		}


		//@��ע �����б���ģ���ļ����ڴ��ַ���
		//@���� nType ģ������,֧������: \n
		//@���� pStringXML �ַ���ָ��.
		//@���� ����ģ����Ϣ.
		//@���� ��ģ��_���ش��ַ���()
		HTEMP LoadFromString(listItemTemp_type_ nType, const std::string& xmlData) 
		{
			m_handle = XTemp_LoadFromString(nType, xmlData.c_str());
			return m_handle;
		}


		//@��ע �����б���ģ����ַ���
		//@���� nType ģ������, ֧������: \n 
		//@���� pStringXML �ַ�������
		//@���� pOutTemp1 ����ģ����1, ��ģ��
		//@���� pOutTemp2 ����ģ����2, �б�ͷģ����б�����ģ��
		//@���� ����ɹ�����TRUE,���򷵻�FALSE.
		//@���� ��ģ��_���ش��ַ�����չ()
		static bool LoadFromStringEx(listItemTemp_type_ nType, const std::string& xmlData, HTEMP* pOutTemp1, HTEMP* pOutTemp2) {
			return XTemp_LoadFromStringEx(nType, xmlData.c_str(), pOutTemp1, pOutTemp2);
		}


		//@��ע ��ȡ�б���ģ������
		//@���� hTemp �б���ģ����.
		//@���� ����ģ������.
		//@���� ��ģ��_ȡ����()
		listItemTemp_type_ GetType() {
			return XTemp_GetType(m_handle);
		}	

		//@��ע ��ģ������
		//@���� hTemp ��ģ����.
		//@���� ��ģ��_����()
		bool Destroy() {
			return 	XTemp_Destroy(m_handle);
		}


		//@��ע ����һ���µ���ģ��
		//@���� hTemp �б���ģ����
		//@���� ����ģ����
		//@���� ��ģ��_��¡()
		HTEMP Clone(HTEMP hTemp) {
			m_handle = XTemp_Clone(hTemp);
			return m_handle;
		}

		//@��ע ��Ӹ��ڵ�
		//@���� hTemp ��ģ����.
		//@���� pNode �ڵ�ָ��.
		//@���� �ɹ�����TRUE,���򷵻�FALSE.
		//@���� ��ģ��_��Ӹ��ڵ�()
		bool AddNodeRoot(HTNODE pNode) {
			return XTemp_AddNodeRoot(m_handle, pNode);
		}

		//@��ע ��ȡ�б��еĽڵ�
		//@���� hTemp ģ����
		//@���� index �ڵ�λ������
		//@���� ���ط��ؽڵ�ָ��
		//@���� ��ģ��_ȡ�б��еĽڵ�()
		HTNODE GetNode(int index) {
			return XTemp_List_GetNode(m_handle, index);
		}

		HTEMP getHandle() const {
			return m_handle;
		}

	protected:
		HTEMP m_handle;
	};

}