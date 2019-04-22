
#include"circle.h"
#pragma once;
circle::circle(float r, string k){
 radius=r;
 color=k;
}

float circle::area(){

	return 3.14*radius;
}
circle::~circle() { cout << "~ circle () called."<<endl;  	}


