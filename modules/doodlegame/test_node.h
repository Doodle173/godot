#pragma once

#include "scene/3d/node_3d.h"

namespace doodlegame {
	class TestNode : public Node3D {
		GDCLASS(TestNode, Node3D);

	public:
		TestNode();
	protected:
		static void _bind_methods();
		void _notification(int p_what);
	private:
	};
} //namespace doodlegame
