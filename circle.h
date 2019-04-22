#include"shape.h"
#pragma once;
class circle:public shape{

public:
	float area();
	circle(float,string);
	~circle();
private:
	float radius;

};