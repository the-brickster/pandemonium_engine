#ifndef PAINT_TOOLS_PROPERTY_INSPECTOR_H
#define PAINT_TOOLS_PROPERTY_INSPECTOR_H

/*
Copyright (c) 2022 Péter Magyar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "paint_custom_property_inspector.h"
#include "core/object/object_id.h"
#include "core/object/reference.h"

class HFlowContainer;
class PaintNode;
class PaintCanvas;
class PaintProject;
class ButtonGroup;

class PaintToolsPropertyInspector : public PaintCustomPropertyInspector {
	GDCLASS(PaintToolsPropertyInspector, PaintCustomPropertyInspector);

public:
	void add_button(int id, const String &hint, const String &icon, const String &theme_type);

	void _on_paint_node_selected(Node *paint_node);

	PaintToolsPropertyInspector();
	~PaintToolsPropertyInspector();

protected:
	void on_button_toggled(bool on, int id);
	void _on_tool_changed();

	static void _bind_methods();

	HFlowContainer *_grid;

	ObjectID _paint_canvas;

	Ref<ButtonGroup> _group;
};

#endif