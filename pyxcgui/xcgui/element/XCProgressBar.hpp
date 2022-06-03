#pragma once
#include "pch.h"
#include "xcgui/XCElement.hpp"

namespace xcgui {

	class XCProgressBar : public XCElement
	{
	public:
		XCProgressBar(HELE handle)
		{
			m_handle = handle;
		}

		XCProgressBar() = default;

		XCProgressBar(int x, int y, int width, int height, HXCGUI parent = NULL) {
			m_handle = XProgBar_Create(x, y, width, height, parent);
		}

		//@��ע ��ʾ����ֵ�ı�
		//@���� bShow �Ƿ�����
		//@����  ���ý����ı�()
		void EnableShowText(bool bShow) {
			XProgBar_EnableShowText(getEleHandle(), bShow);
		}

		//@��ע ���Ž�����ͼΪ��ǰ��������(��ǰ��������ʾ����),����Ϊ����100%��������
		//@���� bStretch ����
		//@���� ����ɹ�����TRUE,���򷵻�FALSE
		//@����  ��������()
		void EnableStretch(bool bStretch) {
			XProgBar_EnableStretch(getEleHandle(), bStretch);
		}

		//@��ע ���÷�Χ.  
		//@���� range ��Χ.
		//@����  �÷�Χ()
		void SetRange(int range) {
			XProgBar_SetRange(getEleHandle(), range);
		}

		//@��ע ��ȡ��Χ.  
		//@���� ���ط�Χ.
		//@����  ȡ��Χ()
		int GetRange() {
			return XProgBar_GetRange(getEleHandle());
		}

		//@��ע ���ý�����ͼ.  
		//@���� hImage ͼƬ���.
		//@����  �ý���ͼƬ()
		void SetImageLoad(HIMAGE hImage) {
			XProgBar_SetImageLoad(getEleHandle(), hImage);
		}

		//@��ע ����λ�õ�.  
		//@���� pos λ�õ�.
		//@����  �ý���()
		void SetPos(int pos) {
			XProgBar_SetPos(getEleHandle(), pos);
		}

		//@��ע ��ȡ��ǰλ�õ�.  
		//@���� ���ص�ǰλ�õ�.
		//@����  ȡ����()
		int GetPos() {
			return XProgBar_GetPos(getEleHandle());
		}

		//@��ע ����ˮƽ��ֱ.  
		//@���� bHorizon ˮƽ��ֱ.
		//@����  ����ˮƽ()
		void EnableHorizon(bool bHorizon) {
			XProgBar_EnableHorizon(getEleHandle(), bHorizon);
		}


	};
}