#include "DreptunghicIsoscel.h"
#include <math.h>
#include <iostream>

using namespace std;

DreptunghicIsoscel::DreptunghicIsoscel(double c1, double c2, double i) : Dreptunghic(c1, c2, i){}
DreptunghicIsoscel::DreptunghicIsoscel(const DreptunghicIsoscel& o) : Dreptunghic(o){}
DreptunghicIsoscel::~DreptunghicIsoscel() {}
void DreptunghicIsoscel::arie() {
	Dreptunghic::arie();
}
void DreptunghicIsoscel::perimetru() {
	Dreptunghic::perimetru();
}
