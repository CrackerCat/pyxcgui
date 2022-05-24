#include "pch.h"
#include "main.h"
#include "binding/XEnum.hpp"
#include "binding/XStruct.hpp"
#include "binding/XApp.hpp"
#include "binding/XWidget.hpp"
#include "binding/XWindow.hpp"

namespace xcgui {

	PYBIND11_MODULE(xcgui, m) {
		m.doc() = "xcgui for python";


		// ����ö������
		declareEnum(m);

		// ����struct
		declareStruct(m);

		// app
		declareApp(m);

		// widget
		declareWidget(m);

		// window
		declareWindow(m);
		
	}
}