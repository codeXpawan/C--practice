/*Write a program with classes to represent a circle, rectangle, and triangle. Each class 
 should have data members to represent the actual objects and member functions to read and
 display objects, find perimeter and area of the objects, and other useful functions. Use
 the classes to create objects in your program.
*/
#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14
class circle{
	float diameter;
	public:
	void read(){
		cin>>diameter;
	}
	void perimeter(){
		cout<<"\nPerimeter of circle: "<<PI*diameter;
	}
	void area(){
		cout<<"\nArea of the circle: "<<(PI*(diameter*diameter))/4;
	}
};
class rectangle{
	float length, breadth;
	public:
	void read(){
		cin>>length>>breadth;
	}
	void perimeter(){
		cout<<"\nPerimeter of rectangle: "<<2*(length+breadth);
	}
	void area(){
		cout<<"\nArea of the rectangle: "<<length*breadth;
	}
};
class triangle{
	float side_a,side_b,side_c;
	public:
	void read(){
		cin>>side_a>>side_b>>side_c;
	}
	void perimeter(){
		cout<<"\nPerimeter of Triangle: "<<side_a+side_b+side_c;
	}
	void area(){
		float s;
		s = (side_a+side_b+side_c)/2;
		cout<<"\nArea of the triangle: "<<sqrt(s*(s-side_a)*(s-side_b)*(s-side_c));
	}
};
int main(){
	circle c;
	rectangle r;
	triangle t;
	cout<<"Enter the diameter of circle: ";
	c.read();
	cout<<"Enter the length and breadth of rectangle: ";
	r.read();
	cout<<"Enter the sides of triangle: ";
	t.read();
	c.perimeter();
	r.perimeter();
	t.perimeter();
	c.area();
	r.area();
	t.area();
	return 0;
}
