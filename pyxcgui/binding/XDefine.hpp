#pragma once
#include "pch.h"


namespace xcgui {

	void declareDefine(py::module& m) {
		m.attr("WM_PAINT") = WM_PAINT;
		m.attr("WM_DESTROY") = WM_DESTROY;
		m.attr("WM_NCDESTROY") = WM_NCDESTROY;
		m.attr("WM_LBUTTONDOWN") = WM_LBUTTONDOWN;
		m.attr("WM_RBUTTONDOWN") = WM_RBUTTONDOWN;
		m.attr("WM_RBUTTONUP") = WM_RBUTTONUP;
		m.attr("WM_LBUTTONDBLCLK") = WM_LBUTTONDBLCLK;
		m.attr("WM_RBUTTONDBLCLK") = WM_RBUTTONDBLCLK;
		m.attr("WM_MOUSEMOVE") = WM_MOUSEMOVE;
		m.attr("WM_MOUSEHOVER") = WM_MOUSEHOVER;
		m.attr("WM_MOUSEWHEEL") = WM_MOUSEWHEEL;
		m.attr("WM_CAPTURECHANGED") = WM_CAPTURECHANGED;
		m.attr("WM_KEYDOWN") = WM_KEYDOWN;
		m.attr("WM_KEYUP") = WM_KEYUP;
		m.attr("WM_CHAR") = WM_CHAR;
		m.attr("WM_SIZE") = WM_SIZE;
		m.attr("WM_EXITSIZEMOVE") = WM_EXITSIZEMOVE;
		m.attr("WM_TIMER") = WM_TIMER;
		m.attr("WM_SETFOCUS") = WM_SETFOCUS;
		m.attr("WM_KILLFOCUS") = WM_KILLFOCUS;
		m.attr("WM_SETCURSOR") = WM_SETCURSOR;
		m.attr("WM_DROPFILES") = WM_DROPFILES;
		m.attr("XC_NAME1") = "name1";
		m.attr("XC_NAME2") = "name2";
		m.attr("XC_NAME3") = "name3";
		m.attr("XC_NAME4") = "name4";
		m.attr("XC_NAME5") = "name5";
		m.attr("XC_NAME6") = "name6";
		m.attr("WINDOW_TOP") = WINDOW_TOP;
		m.attr("WINDOW_BOTTOM") = WINDOW_BOTTOM;
		m.attr("WINDOW_LEFT") = WINDOW_LEFT;
		m.attr("WINDOW_RIGHT") = WINDOW_RIGHT;
		m.attr("WINDOW_TOPLEFT") = WINDOW_TOPLEFT;
		m.attr("WINDOW_TOPRIGHT") = WINDOW_TOPRIGHT;
		m.attr("WINDOW_BOTTOMLEFT") = WINDOW_BOTTOMLEFT;
		m.attr("WINDOW_BOTTOMRIGHT") = WINDOW_BOTTOMRIGHT;
		m.attr("WINDOW_CAPTION") = WINDOW_CAPTION;
		m.attr("WINDOW_BODY") = WINDOW_BODY;
		m.attr("XC_ID_ROOT") = XC_ID_ROOT;
		m.attr("XC_ID_ERROR") = XC_ID_ERROR;
		m.attr("XC_ID_FIRST") = XC_ID_FIRST;
		m.attr("XC_ID_LAST") = XC_ID_LAST;
		m.attr("XWM_EVENT_ALL") = XWM_EVENT_ALL;
		m.attr("XWM_REDRAW_ELE") = XWM_REDRAW_ELE;
		m.attr("XWM_WINDPROC") = XWM_WINDPROC;
		m.attr("XWM_DRAW_T") = XWM_DRAW_T;
		m.attr("XWM_TIMER_T") = XWM_TIMER_T;
		m.attr("XWM_CLOUDUI_DOWNLOADFILE_COMPLETE") = XWM_CLOUDUI_DOWNLOADFILE_COMPLETE;
		m.attr("XWM_CLOUNDUI_OPENURL_WAIT") = XWM_CLOUNDUI_OPENURL_WAIT;
		m.attr("XWM_CALL_UI_THREAD") = XWM_CALL_UI_THREAD;
		m.attr("XWM_XC_TIMER") = XWM_XC_TIMER;
		m.attr("XWM_MENU_POPUP") = XWM_MENU_POPUP;
		m.attr("XWM_MENU_POPUP_WND") = XWM_MENU_POPUP_WND;
		m.attr("XWM_MENU_SELECT") = XWM_MENU_SELECT;
		m.attr("XWM_MENU_EXIT") = XWM_MENU_EXIT;
		m.attr("XWM_MENU_DRAW_BACKGROUND") = XWM_MENU_DRAW_BACKGROUND;
		m.attr("XWM_MENU_DRAWITEM") = XWM_MENU_DRAWITEM;
		m.attr("XWM_COMBOBOX_POPUP_DROPLIST") = XWM_COMBOBOX_POPUP_DROPLIST;
		m.attr("XWM_FLOAT_PANE") = XWM_FLOAT_PANE;
		m.attr("XWM_PAINT_END") = XWM_PAINT_END;
		m.attr("XWM_PAINT_DISPLAY") = XWM_PAINT_DISPLAY;
		m.attr("XWM_DOCK_POPUP") = XWM_DOCK_POPUP;
		m.attr("XWM_FLOATWND_DRAG") = XWM_FLOATWND_DRAG;
		m.attr("XWM_PANE_SHOW") = XWM_PANE_SHOW;
		m.attr("XE_ELEPROCE") = XE_ELEPROCE;
		m.attr("XE_PAINT") = XE_PAINT;
		m.attr("XE_PAINT_END") = XE_PAINT_END;
		m.attr("XE_PAINT_SCROLLVIEW") = XE_PAINT_SCROLLVIEW;
		m.attr("XE_MOUSEMOVE") = XE_MOUSEMOVE;
		m.attr("XE_MOUSESTAY") = XE_MOUSESTAY;
		m.attr("XE_MOUSEHOVER") = XE_MOUSEHOVER;
		m.attr("XE_MOUSELEAVE") = XE_MOUSELEAVE;
		m.attr("XE_MOUSEWHEEL") = XE_MOUSEWHEEL;
		m.attr("XE_LBUTTONDOWN") = XE_LBUTTONDOWN;
		m.attr("XE_LBUTTONUP") = XE_LBUTTONUP;
		m.attr("XE_RBUTTONDOWN") = XE_RBUTTONDOWN;
		m.attr("XE_RBUTTONUP") = XE_RBUTTONUP;
		m.attr("XE_LBUTTONDBCLICK") = XE_LBUTTONDBCLICK;
		m.attr("XE_XC_TIMER") = XE_XC_TIMER;
		m.attr("XE_ADJUSTLAYOUT") = XE_ADJUSTLAYOUT;
		m.attr("XE_ADJUSTLAYOUT_END") = XE_ADJUSTLAYOUT_END;
		m.attr("XE_SETFOCUS") = XE_SETFOCUS;
		m.attr("XE_KILLFOCUS") = XE_KILLFOCUS;
		m.attr("XE_DESTROY") = XE_DESTROY;
		m.attr("XE_DESTROY_END") = XE_DESTROY_END;
		m.attr("XE_SIZE") = XE_SIZE;
		m.attr("XE_SHOW") = XE_SHOW;
		m.attr("XE_SETFONT") = XE_SETFONT;
		m.attr("XE_KEYDOWN") = XE_KEYDOWN;
		m.attr("XE_KEYUP") = XE_KEYUP;
		m.attr("XE_CHAR") = XE_CHAR;
		m.attr("XE_SYSKEYDOWN") = XE_SYSKEYDOWN;
		m.attr("XE_SYSKEYUP") = XE_SYSKEYUP;
		m.attr("XE_SETCAPTURE") = XE_SETCAPTURE;
		m.attr("XE_KILLCAPTURE") = XE_KILLCAPTURE;
		m.attr("XE_SETCURSOR") = XE_SETCURSOR;
		m.attr("XE_MENU_POPUP") = XE_MENU_POPUP;
		m.attr("XE_MENU_POPUP_WND") = XE_MENU_POPUP_WND;
		m.attr("XE_MENU_SELECT") = XE_MENU_SELECT;
		m.attr("XE_MENU_DRAW_BACKGROUND") = XE_MENU_DRAW_BACKGROUND;
		m.attr("XE_MENU_DRAWITEM") = XE_MENU_DRAWITEM;
		m.attr("XE_MENU_EXIT") = XE_MENU_EXIT;
		m.attr("XE_BNCLICK") = XE_BNCLICK;
		m.attr("XE_BUTTON_CHECK") = XE_BUTTON_CHECK;
		m.attr("XE_SCROLLVIEW_SCROLL_H") = XE_SCROLLVIEW_SCROLL_H;
		m.attr("XE_SCROLLVIEW_SCROLL_V") = XE_SCROLLVIEW_SCROLL_V;
		m.attr("XE_SBAR_SCROLL") = XE_SBAR_SCROLL;
		m.attr("XE_SLIDERBAR_CHANGE") = XE_SLIDERBAR_CHANGE;
		m.attr("XE_PROGRESSBAR_CHANGE") = XE_PROGRESSBAR_CHANGE;
		m.attr("XE_COMBOBOX_SELECT") = XE_COMBOBOX_SELECT;
		m.attr("XE_COMBOBOX_SELECT_END") = XE_COMBOBOX_SELECT_END;
		m.attr("XE_COMBOBOX_POPUP_LIST") = XE_COMBOBOX_POPUP_LIST;
		m.attr("XE_COMBOBOX_EXIT_LIST") = XE_COMBOBOX_EXIT_LIST;
		m.attr("XE_LISTBOX_TEMP_CREATE") = XE_LISTBOX_TEMP_CREATE;
		m.attr("XE_LISTBOX_TEMP_CREATE_END") = XE_LISTBOX_TEMP_CREATE_END;
		m.attr("XE_LISTBOX_TEMP_UPDATE") = XE_LISTBOX_TEMP_UPDATE;
		m.attr("XE_LISTBOX_TEMP_DESTROY") = XE_LISTBOX_TEMP_DESTROY;
		m.attr("XE_LISTBOX_TEMP_ADJUST_COORDINATE") = XE_LISTBOX_TEMP_ADJUST_COORDINATE;
		m.attr("XE_LISTBOX_DRAWITEM") = XE_LISTBOX_DRAWITEM;
		m.attr("XE_LISTBOX_SELECT") = XE_LISTBOX_SELECT;
		m.attr("XE_LIST_TEMP_CREATE") = XE_LIST_TEMP_CREATE;
		m.attr("XE_LIST_TEMP_CREATE_END") = XE_LIST_TEMP_CREATE_END;
		m.attr("XE_LIST_TEMP_UPDATE") = XE_LIST_TEMP_UPDATE;
		m.attr("XE_LIST_TEMP_DESTROY") = XE_LIST_TEMP_DESTROY;
		m.attr("XE_LIST_TEMP_ADJUST_COORDINATE") = XE_LIST_TEMP_ADJUST_COORDINATE;
		m.attr("XE_LIST_DRAWITEM") = XE_LIST_DRAWITEM;
		m.attr("XE_LIST_SELECT") = XE_LIST_SELECT;
		m.attr("XE_LIST_HEADER_DRAWITEM") = XE_LIST_HEADER_DRAWITEM;
		m.attr("XE_LIST_HEADER_CLICK") = XE_LIST_HEADER_CLICK;
		m.attr("XE_LIST_HEADER_WIDTH_CHANGE") = XE_LIST_HEADER_WIDTH_CHANGE;
		m.attr("XE_LIST_HEADER_TEMP_CREATE") = XE_LIST_HEADER_TEMP_CREATE;
		m.attr("XE_LIST_HEADER_TEMP_CREATE_END") = XE_LIST_HEADER_TEMP_CREATE_END;
		m.attr("XE_LIST_HEADER_TEMP_DESTROY") = XE_LIST_HEADER_TEMP_DESTROY;
		m.attr("XE_LIST_HEADER_TEMP_ADJUST_COORDINATE") = XE_LIST_HEADER_TEMP_ADJUST_COORDINATE;
		m.attr("XE_TREE_TEMP_CREATE") = XE_TREE_TEMP_CREATE;
		m.attr("XE_TREE_TEMP_CREATE_END") = XE_TREE_TEMP_CREATE_END;
		m.attr("XE_TREE_TEMP_UPDATE") = XE_TREE_TEMP_UPDATE;
		m.attr("XE_TREE_TEMP_DESTROY") = XE_TREE_TEMP_DESTROY;
		m.attr("XE_TREE_TEMP_ADJUST_COORDINATE") = XE_TREE_TEMP_ADJUST_COORDINATE;
		m.attr("XE_TREE_DRAWITEM") = XE_TREE_DRAWITEM;
		m.attr("XE_TREE_SELECT") = XE_TREE_SELECT;
		m.attr("XE_TREE_EXPAND") = XE_TREE_EXPAND;
		m.attr("XE_TREE_DRAG_ITEM_ING") = XE_TREE_DRAG_ITEM_ING;
		m.attr("XE_TREE_DRAG_ITEM") = XE_TREE_DRAG_ITEM;
		m.attr("XE_LISTVIEW_TEMP_CREATE") = XE_LISTVIEW_TEMP_CREATE;
		m.attr("XE_LISTVIEW_TEMP_CREATE_END") = XE_LISTVIEW_TEMP_CREATE_END;
		m.attr("XE_LISTVIEW_TEMP_UPDATE") = XE_LISTVIEW_TEMP_UPDATE;
		m.attr("XE_LISTVIEW_TEMP_DESTROY") = XE_LISTVIEW_TEMP_DESTROY;
		m.attr("XE_LISTVIEW_TEMP_ADJUST_COORDINATE") = XE_LISTVIEW_TEMP_ADJUST_COORDINATE;
		m.attr("XE_LISTVIEW_DRAWITEM") = XE_LISTVIEW_DRAWITEM;
		m.attr("XE_LISTVIEW_SELECT") = XE_LISTVIEW_SELECT;
		m.attr("XE_LISTVIEW_EXPAND") = XE_LISTVIEW_EXPAND;
		m.attr("XE_PGRID_VALUE_CHANGE") = XE_PGRID_VALUE_CHANGE;
		m.attr("XE_PGRID_ITEM_SET") = XE_PGRID_ITEM_SET;
		m.attr("XE_PGRID_ITEM_SELECT") = XE_PGRID_ITEM_SELECT;
		m.attr("XE_PGRID_ITEM_ADJUST_COORDINATE") = XE_PGRID_ITEM_ADJUST_COORDINATE;
		m.attr("XE_PGRID_ITEM_DESTROY") = XE_PGRID_ITEM_DESTROY;
		m.attr("XE_PGRID_ITEM_EXPAND") = XE_PGRID_ITEM_EXPAND;
		m.attr("XE_EDIT_SET") = XE_EDIT_SET;
		m.attr("XE_EDIT_DRAWROW") = XE_EDIT_DRAWROW;
		m.attr("XE_EDIT_CHANGED") = XE_EDIT_CHANGED;
		m.attr("XE_EDIT_POS_CHANGED") = XE_EDIT_POS_CHANGED;
		m.attr("XE_EDIT_STYLE_CHANGED") = XE_EDIT_STYLE_CHANGED;
		m.attr("XE_EDIT_ENTER_GET_TABALIGN") = XE_EDIT_ENTER_GET_TABALIGN;
		m.attr("XE_EDIT_SWAPROW") = XE_EDIT_SWAPROW;
		m.attr("XE_EDITOR_MODIFY_ROWS") = XE_EDITOR_MODIFY_ROWS;
		m.attr("XE_EDITOR_SETBREAKPOINT") = XE_EDITOR_SETBREAKPOINT;
		m.attr("XE_EDITOR_REMOVEBREAKPOINT") = XE_EDITOR_REMOVEBREAKPOINT;
		m.attr("XE_EDIT_ROW_CHANGED") = XE_EDIT_ROW_CHANGED;
		m.attr("XE_EDITOR_AUTOMATCH_SELECT") = XE_EDITOR_AUTOMATCH_SELECT;
		m.attr("XE_TABBAR_SELECT") = XE_TABBAR_SELECT;
		m.attr("XE_TABBAR_DELETE") = XE_TABBAR_DELETE;
		m.attr("XE_MONTHCAL_CHANGE") = XE_MONTHCAL_CHANGE;
		m.attr("XE_DATETIME_CHANGE") = XE_DATETIME_CHANGE;
		m.attr("XE_DATETIME_POPUP_MONTHCAL") = XE_DATETIME_POPUP_MONTHCAL;
		m.attr("XE_DATETIME_EXIT_MONTHCAL") = XE_DATETIME_EXIT_MONTHCAL;
		m.attr("XE_DROPFILES") = XE_DROPFILES;
		m.attr("XE_EDIT_COLOR_CHANGE") = XE_EDIT_COLOR_CHANGE;
	}
}