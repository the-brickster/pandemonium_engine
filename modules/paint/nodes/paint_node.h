#ifndef PAINT_NODE_H
#define PAINT_NODE_H

#include "core/math/vector2i.h"

#include "scene/2d/node_2d.h"

class PaintNode : public Node2D {
	GDCLASS(PaintNode, Node2D);

public:
	Vector2i get_size();
	void set_size(const Vector2i &size);

	PaintNode();
	~PaintNode();

protected:
	static void _bind_methods();

	Vector2i _size;
};

#endif