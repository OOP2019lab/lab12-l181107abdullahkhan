#pragma once
#include"shape.h"

shape::shape(){
	type=" ";
	color="";
	
}


float shape::area()
{
	return 0.0;
}

shape::shape(string k){
	color=k;
}
shape::~shape(){ cout << "~shape() called."<<endl; 	}
