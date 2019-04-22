#include"shape.h"
#pragma once;
class rectangle:public shape{

		float base;
	float height;
public:
	float area();
	rectangle(float,float,string);
	~rectangle();
};
