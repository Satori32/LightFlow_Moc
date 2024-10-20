#pragma once
#include "Any.h"
#include "Point3D.h"
#include "Size3D.h"


//#include "Lightflow3D.h"

//template<class T>
struct Lightflow {
	//type T = BVH<double>;
	Point3D<double> Light;
	Point3D<double> Look;
	Any Color;
	//T Color;
};
template<class T> Lightflow ConstructLightFlow<T>(Point3D<double>& Light, Point3D<double>& Look, T& Color);
/* template<class T> */ bool free(Lightflow& In)