#pragma once
#include "pch.h"
#include "xcgui/XCWidget.hpp"
#include "xcgui/XCWindow.hpp"
#include "xcgui/XCCast.hpp"


namespace xcgui {

	void declareWidget(py::module& m) {

		py::class_<XCLayoutSize>(m, "XLayoutSize")
			.def(py::init<>())
			.def(py::init<layout_size_, int>(), "sizeType"_a, "size"_a)
			.def_readwrite("sizeType", &XCLayoutSize::sizeType)
			.def_readwrite("size", &XCLayoutSize::size);


		py::class_<XCWidgetLayout>(m, "XWidgetLayout")
			.def("enableWrap", &XCWidgetLayout::EnableWrap, "wrap"_a)
			.def("enableSwap", &XCWidgetLayout::EnableSwap, "swap"_a)
			.def("enableFloat", &XCWidgetLayout::EnableFloat, "float"_a)
			.def("setWidth", &XCWidgetLayout::SetWidth, "layoutSize"_a)
			.def("setHeight", &XCWidgetLayout::SetHeight, "layoutSize"_a)
			.def("getWidth", &XCWidgetLayout::GetWidth)
			.def("getHeight", &XCWidgetLayout::GetHeight)
			.def("setAlign", &XCWidgetLayout::SetAlign, "align"_a)
			.def("setMargin", &XCWidgetLayout::SetMargin, "margin"_a)
			.def("getMargin", &XCWidgetLayout::GetMargin)
			.def("setMinSize", &XCWidgetLayout::SetMinSize, "width"_a, "height"_a)
			.def("setPosition", &XCWidgetLayout::SetPosition, "left"_a, "top"_a, "right"_a, "bottom"_a);



		py::class_<XCWidget, XCObjectUI>(m, "XWidget")
			.def("isShow", &XCWidget::IsShow)
			.def("show", &XCWidget::Show, "show"_a)
			.def("enableLayoutControl", &XCWidget::EnableLayoutControl, "enable"_a)
			.def("IsLayoutControl", &XCWidget::IsLayoutControl)

			.def("getParentEle", [](const XCWidget& self) -> XCObject* { 
				return CastObject(self.GetParentEle());
			}, py::return_value_policy::take_ownership)


			.def("getParent", [](const XCWidget& self) -> XCObject* {
				return CastObject(self.getParent());
			}, py::return_value_policy::take_ownership)


			.def("getHWND", &XCWidget::GetHWND)
			.def("getWindow", [](const XCWidget& self) -> XCWindow {
				auto winHandle = self.GetWindow();
				if (!winHandle) {
					return nullptr;
				}
				return XCWindow(winHandle);
			})

			.def("setID", &XCWidget::SetID, "id"_a)
			.def("getID", &XCWidget::GetID)
			.def("setUID", &XCWidget::SetUID, "uid"_a)
			.def("getUID", &XCWidget::GetUID)
			.def("setName", &XCWidget::SetName, "name"_a)
			.def("getName", &XCWidget::GetName)
			.def_readonly("layout", &XCWidget::m_layout, py::return_value_policy::reference);

	}
}