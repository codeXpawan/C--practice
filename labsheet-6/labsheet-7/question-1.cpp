/*Write a program to create a class shape with functions to find the area of the shapes and 
display the names of the shapes and other essential components of the class. 
Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). 
Write a suitable program to illustrate virtual functions and virtual destructors.
*/
#include<iostream>
using namespace std;
class shape{
	public:
	virtual void area(){}
	virtual void display(){}
	virtual ~shape(){}
};
class circle:public shape{
	private:
		float radius,a;
	public:
		circle():radius(0){}
		circle(float x):radius(x){}
		void area(){
			a = 3.14*radius*radius;
		}
		void display(){
			cout<<"\nThe area of circle is: "<<a;
		}
		virtual ~circle(){}
};
class rectangle:public shape{
	private:
		float len,bre,a;
	public:
		rectangle():len(0),bre(0){}
		rectangle(float x, float y):len(x),bre(y){}
		void area(){
			a = len*bre;
		}
		void display(){
			cout<<"\nThe area of the rectangle is: "<<a;
		}
		virtual ~rectangle(){}
};
class trapezoid:public shape{
	private:
		float len,bre,hei,a;
	public:
		trapezoid():len(0),bre(0),hei(0){}
		trapezoid(float x, float y, float z):len(x),bre(y),hei(z){}
		void area(){
			a =(len+bre)/(2*hei);
		}
		void display(){
			cout<<"\nThe area of the trapezoid is: "<<a;
		}
		virtual ~trapezoid(){}
};
int main(){
	circle c(2);
	rectangle r(2,3);
	trapezoid t(4,4,1);
	shape *ptr[] = {&c,&r,&t};
	for(int i = 0;i<3;i++){
		ptr[i]->area();
		ptr[i]->display();
	}
	return 0;
}
