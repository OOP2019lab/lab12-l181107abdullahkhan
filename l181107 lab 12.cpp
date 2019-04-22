#pragma once;
#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"triangle.h"
#include<string>
#include<conio.h>

float sumarea(shape *a, shape *b);
void main(){

triangle t1(1.0,9.0, "Red");
circle c1(2, "Blue");
rectangle r1(6,2, "Orange");
cout<<t1.area()<<endl;
cout<<t1.color<<endl;
cout<<c1.area()<<endl;
cout<<r1.area()<<endl;
 
shape *sptr1= &t1;
shape &sref=r1;
cout<<sptr1->area()<<endl;
cout<<sptr1->color<<endl;
cout<<sref.color<<endl;
cout<<sref.area()<<endl;
shape s1("Purple");
cout<<"area="<<sumarea(&t1,&c1)<<endl;
cout<<"area="<<sumarea(&s1,&r1)<<endl;
cout<<"area="<<sumarea(&s1,&t1)<<endl;
shape **s2=new shape*[5];
int k=0;
float b;
float h;
string c;
float r;
for(int i=0;i<5;i++)
{
	cout<<"enter 1 for triangle, 2 for circle, 3 for rectangle"<<endl;
	
	switch(_getch())
	{

		case'1':
	{
		cout<<"enter base of triangle"<<endl;
		cin>>b;
		cout<<"enter height of triangle"<<endl;
		cin>>h;
		cout<<"enter color of triangle"<<endl;
		cin>>c;
		s2[i]=new triangle (b,h,c);
		break;
		
	}
		case '2':
	{
		cout<<"enter radius of circle"<<endl;
		cin>>r;
		cout<<"enter color of circle"<<endl;
		cin>>c;
		s2[i]=new circle (r,c);
		break;
	}
		case '3':
	{
		cout<<"enter base of rectangle"<<endl;
		cin>>b;
		cout<<"enter height of rectangle"<<endl;
		cin>>h;
		cout<<"enter color of rectangle"<<endl;
		cin>>c;
		s2[i]=new rectangle (b,h,c);
		break;
	}
		default:
		cout<<"invalid input"<<endl;
}



 

}

for(int i=0;i<5;i++)
{
	cout<<s2[i]->area();
}
	for(int i=0;i<5;i++)
	{
		delete s2[i];
   }
	delete s2;

}


float sumarea(shape *a, shape *b)
{
	return a->area()+b->area();
}


