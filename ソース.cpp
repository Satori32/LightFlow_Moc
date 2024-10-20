/** /#include <stdio.h>
#include <stdint.h>

#include "Lightflow3D.h"

//template<class T>
struct Lightflow {
	//type T = BVH<double>;
	Point3D<double> Light;
	Point3D<double> Look;
	Any Color;
	//T Color;
};


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
/**/

#include "LightFlow.h"

struct RGB24 {
	uint8_t B=0;
	uint8_t G=0;
	uint8_t R=0;
};
int main() {
	Point3D<double> L = ConstructPoint3D<double>(0, 0, 0);
	Point3D<double> C = ConstructPoint3D<double>(0, 0, 8);
	RGB24 Co;
	Lightflow LF = ConstructLightFlow<RGB24>(C, L, Co);

	LF.Light = LotXY(LF.Look,90);
}