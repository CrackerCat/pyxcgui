#pragma once

#include "pch.h"
#include "XCObjectUI.hpp"

namespace xcgui {
	class XCWindow : public XCObjectUI
	{
	public:

		XCWindow(HWINDOW hWindow)
			:XCObjectUI((HXCGUI)hWindow)
		{
		}

		XCWindow()
		: XCObjectUI()
		{
			auto hWindow = XWnd_Create(0, 0, 0, 0, NULL, NULL, window_style_default);
			this->SetWindowHandle(hWindow);
		}

		XCWindow(int width, int height, const std::wstring& title) 
			: XCObjectUI() 
		{
			auto hWindow = XWnd_Create(0, 0, width, height, title.c_str(), NULL, window_style_default);
			this->SetWindowHandle(hWindow);
		}

		XCWindow(int x, int y, int width, int height, const std::wstring& title, uintptr_t hWndParent = 0, int style = window_style_default)
			: XCObjectUI()
		{
			auto hWindow = XWnd_Create(x, y, width, height, title.c_str(), (HWND)hWndParent, style);
			this->SetWindowHandle(hWindow);
		}


		// hWnd Ҫ���ӵ��ⲿ���ھ��
		bool Attach(uintptr_t hWnd, int style)
		{
			auto hWindow = XWnd_Attach((HWND)hWnd, style);
			this->SetWindowHandle(hWindow);
			return hWindow;
		}

		// 	����Ӷ��󵽴��� 
		bool AddChild(const XCObjectUI& child) 
		{
			return XWnd_AddChild(GetWindowHandle(), child.GetHandle());
		}

		// 	�����Ӷ���ָ��λ��
		bool InsertChild(const XCObjectUI& child, int index)
		{
			return XWnd_InsertChild(GetWindowHandle(), child.GetHandle(), index);
		}

		// �ػ洰��
		void Redraw(bool bImmediate = false)
		{
			XWnd_Redraw(GetWindowHandle(), bImmediate);
		}

		// �ػ洰��ָ������
		void RedrawRect(const XCRect& rect, bool bImmediate = false)
		{
			return XWnd_RedrawRect(GetWindowHandle(), (RECT*)&rect, bImmediate);
		}

		// ���ý���Ԫ��
		void SetFoucsEle(const XCObjectUI& ele) 
		{
			XWnd_SetFocusEle(GetWindowHandle(), (HELE)ele.GetHandle());
		}

		// ���ӵ�����뽹���Ԫ��
		HELE GetFocusEle() const
		{
			auto winHandle = GetWindowHandle();
			if (!winHandle)
				return nullptr;

			return XWnd_GetFocusEle(winHandle);
		}

		// ��ȡ��ǰ�����ͣ��Ԫ��
		HELE GetStayEle() const 
		{
			auto winHandle = GetWindowHandle();
			if (!winHandle)
				return nullptr;
			return XWnd_GetStayEle(GetWindowHandle());
		}

		//  ���Ի��¼�������,�û��ֶ����û��ƴ���,�Ա���ƻ���˳��
		void DrawWindow() 
		{
				
		}

		
		bool ShowWindow(int showType = SW_SHOW)
		{
			return XWnd_ShowWindow(GetWindowHandle(), showType);
		}



	protected:
		void SetWindowHandle(HWINDOW winHandle)
		{
			this->SetHandle((HXCGUI)winHandle);
		}

		HWINDOW GetWindowHandle() const 
		{
			return (HWINDOW)m_handle;
		}

	};

}