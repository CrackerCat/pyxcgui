#pragma once
#include "pch.h"

namespace xcgui {
	class XCEase
	{
	public:
		//@��ע ����
	//@���� pos λ��, 0.0f - 1.0f
	//@���� ���ؼ�����
	//@���� ����_Linear()
		static float Linear(float pos) {
			return XEase_Linear(pos);
		}

		//@��ע ���η�����
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Quad()
		static float Quad(float pos, ease_type_ flag) {
			return XEase_Quad(pos, flag);
		}

		//@��ע ���η�����  Բ��
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Cubic()
		static float Cubic(float pos, ease_type_ flag) {
			return 	XEase_Cubic(pos, flag);
		}

		//@��ע �ķ�����
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Quart()
		static float Quart(float pos, ease_type_ flag) {
			return XEase_Quart(pos, flag);
		}

		//@��ע ��η�����
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Quint()
		static float Quint(float pos, ease_type_ flag) {
			return XEase_Quint(pos, flag);
		}


		//@��ע ��������, ��ĩ�˱仯
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Sine()
		static float Sine(float pos, ease_type_ flag) {
			return XEase_Sine(pos, flag);
		}

		//@��ע ͻ������, ͻȻһ��
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Expo()
		static float Expo(float pos, ease_type_ flag) {
			return XEase_Expo(pos, flag); 
		}

		//@��ע Բ��, �ñ��ƹ�һ��Բ��
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Circ()
		static float Circ(float pos, ease_type_ flag) {
			return XEase_Circ(pos, flag);
		}


		//@��ע ǿ���ص�
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Elastic()
		static float Elastic(float pos, ease_type_ flag) {
			return XEase_Elastic(pos, flag);
		}

		//@��ע �ص�, �Ƚϻ���
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Back()
		static float Back(float pos, ease_type_ flag) {
			return 	XEase_Back(pos, flag);
		}

		//@��ע ����  ģ��С����ص���
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ
		//@���� ���ؼ�����
		//@���� ����_Bounce()
		static float Bounce(float pos, ease_type_ flag) {
			return XEase_Bounce(pos, flag);
		}


		//@��ע ȫ����������
		//@���� pos λ��, 0.0f - 1.0f
		//@���� flag ������ʽ @ref ease_flag_
		//@���� ���ؼ�����
		//@���� ����_��չ()
		static float Ex(float pos, int flag) {
			return XEase_Ex(pos, flag);
		}
	};
}