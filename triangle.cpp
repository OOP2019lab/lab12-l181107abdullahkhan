#include"triangle.h"

float triangle::area(){

	return (base*height)/2;
}

triangle::triangle(float b,float h,string k){

	base=b;
	height=h;
	color=k;
}
triangle::~triangle(){ cout << "~ triangle () called."<<endl;   }
