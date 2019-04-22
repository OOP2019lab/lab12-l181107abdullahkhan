#include<iostream>
using namespace std;
#pragma once;

class shape{
protected:
	string type;

public:
	virtual float area();
	string color;
	shape();
	shape(string k);
	~shape();
};
