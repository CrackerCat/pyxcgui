#pragma once
#include "pch.h"

namespace xcgui {
	class XCApp
	{
	public:
		XCApp(bool bD2D = false)
		{
			XInitXCGUI(bD2D);
		}

		void Run() 
		{
			XRunXCGUI();
		}

		void Exit() 
		{
			XExitXCGUI();
		}

		// ����ļ�����·��, Ĭ��·ΪexeĿ¼�ͳ���ǰ����Ŀ¼
		void AddFileSearchPath(const std::wstring& path) {
			XC_AddFileSearchPath(path.c_str());
		}


	};
}
