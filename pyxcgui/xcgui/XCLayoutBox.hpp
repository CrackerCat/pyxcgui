#pragma once
#include "pch.h"
#include "XCObject.hpp"

namespace xcgui {

	class XCLayoutBox :virtual public XCObject
	{
	public:
		XCLayoutBox() {

		}
		XCLayoutBox(HXCGUI handle)
		{
			m_handle = handle;
		}
		// ���ֺ���_����ˮƽ
		void EnableHorizon(bool bEnable) {
			XLayoutBox_EnableHorizon(m_handle, bEnable);
		 }
		  
		// ���ֺ���_�����Զ�����
		void EnableAutoWrap(bool bEnable) {
			XLayoutBox_EnableAutoWrap(m_handle, bEnable);
		}

		// ���ֺ���_�����������
		void EnableOverflowHide(bool bEnable) {
			XLayoutBox_EnableOverflowHide(m_handle, bEnable);
		}

		// ���ֺ���_��ˮƽ����
		void SetAlignH(layout_align_ align) {
			XLayoutBox_SetAlignH(m_handle, align);
		}

		// ���ֺ���_�ô�ֱ����
		void SetAlignV(layout_align_ align) {
			XLayoutBox_SetAlignV(m_handle, align);
		}

		//  ���ֺ���_�ö������
		void SetAlignBaseline(layout_align_axis_ align) {
			XLayoutBox_SetAlignBaseline(m_handle, align);
		}

		// ���ֺ���_�ü��
		void SetSpace(int space) {
			XLayoutBox_SetSpace(m_handle, space);
		}

	    // ���ֺ���_���о�
		void SetSpaceRow(int space) {
			XLayoutBox_SetSpaceRow(m_handle, space);
		}
	};
}