#ifndef _TURTLE_INCLUDED_
#define _TURTLE_INCLUDED_

#include "polygon.h"

namespace simplecpp{
	class Turtle : public Polygon{

	public:
		Turtle(Composite* owner=NULL);
	};
}

#endif