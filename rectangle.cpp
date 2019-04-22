#include"rectangle.h"
#pragma once;
float rectangle::area(){

	return base*height;
}
rectangle::rectangle(float b, float h, string k){
	base=b;
	height=h;
	color=k;
}
rectangle::~rectangle(){ cout << "~rectangle() called."<<endl;   }
 
