#pragma once
#include "pch.h"
#include "XCObject.hpp"

namespace xcgui {

	class XCBkManager: public XCObject
	{
	public:
		XCBkManager()
			: XCObject() 
		{
			m_handle = XBkM_Create();
		}

		~XCBkManager() {
		}

		XCBkManager(HBKM handle) :
			XCObject(handle)
		{

		}

		HBKM GetBkmHandle() const {
			return (HBKM)m_handle;
		}

		// 
		void Destroy() { 
			XBkM_Destroy(GetBkmHandle());
		}

		// ���ñ�������
		int SetBkInfo(const std::wstring& text) { 
			return XBkM_SetBkInfo(GetBkmHandle(), text.c_str()); 
		}

		// 	���ñ�������
		int SetInfo(const std::wstring& text) {
			return XBkM_SetInfo(GetBkmHandle(), text.c_str());
		}

		// ��ӱ�������
		int AddInfo(const std::wstring& text) {
			return XBkM_AddInfo(GetBkmHandle(), text.c_str());
		}

		// ��ӱ߿�()
		void AddBorder(int nState, COLORREF color, int width, int id = 0) {
			XBkM_AddBorder(GetBkmHandle(), nState, color, width, id);
		}

		// ��ӱ����������
		void AddFill(int nState, COLORREF color, int id = 0) {
			XBkM_AddFill(GetBkmHandle(), nState, color, id);
		}

		// ��ӱ�������ͼƬ
		void AddImage(int nState, HIMAGE hImage, int id = 0) {
			XBkM_AddImage(GetBkmHandle(), nState, hImage, id);
		}
		
		// ��ȡ������������
		int GetCount() {
			return XBkM_GetCount(GetBkmHandle());
		}

		// 	��ձ�������
		void Clear() {
			XBkM_Clear(GetBkmHandle());
		}

		// ���Ʊ�������
		bool Draw(int nState, HDRAW hDraw, RECT* pRect) {
			return XBkM_Draw(GetBkmHandle(), nState, hDraw, pRect);
		}

		// ���Ʊ�������, ��������
		bool DrawEx(int nState, HDRAW hDraw, RECT* pRect, int nStateEx) { 
			return XBkM_DrawEx(GetBkmHandle(), nState, hDraw, pRect, nStateEx);
		}

		// �Ƿ��Զ�����
		void EnableAutoDestroy(BOOL bEnable) {
			XBkM_EnableAutoDestroy(GetBkmHandle(), bEnable);
		}

		// �������ü���
		void AddRef() { 
			XBkM_AddRef(GetBkmHandle()); 
		}

	    // �ͷ����ü���,�����ü���Ϊ0ʱ,�Զ�����
		void Release() { 
			XBkM_Release(GetBkmHandle()); 
		}

		// ��ȡ���ü���
		int GetRefCount() { 
			return XBkM_GetRefCount(GetBkmHandle()); 
		}

		// ȡָ��״̬�ı���ɫ
		bool GetStateTextColor(int nState, COLORREF* color) { 
			return XBkM_GetStateTextColor(GetBkmHandle(), nState, color); 
		}

		// ��������ID
		vint GetObject(int id) { 
			return XBkM_GetObject(GetBkmHandle(), id); 
		}

	};
}
