#pragma once

#include "pch.h"
#include "xcgui/XCObject.hpp"

namespace xcgui {

	class XCAdapter : public XCObject
	{
	public:
		XCAdapter() = default;
		
		// �������ü���()
		int AddRef() {
			return XAd_AddRef(m_handle);
		}

		// �ͷ����ü���()
		int Release() {
			return XAd_Release(m_handle);
		}

		// ȡ���ü���()
		int GetRefCount() {
			return XAd_GetRefCount(m_handle);
		}

		// ����()
		void Destroy() {
			XAd_Destroy(m_handle);
		}

		// �����Զ�����()
		void EnableAutoDestroy(BOOL bEnable) {
			XAd_EnableAutoDestroy(m_handle, bEnable);
		}

	};

}