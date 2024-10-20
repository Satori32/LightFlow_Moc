#include "LightFlow.h"

template<class T>
Lightflow ConstructLightFlow<T>(Point3D<double>& Light, Point3D<double>& Look, T& Color) {
	Lightflow L;
	//L.T = T;
	L.Light = Light;
	L.Look = Look;
	L.Color = Color;
	return L;
}
//template<class T>
bool free(Lightflow& In) {
	Free(In.Light);
	Free(In.Look);
	Free(In.Color);

	return true;
}