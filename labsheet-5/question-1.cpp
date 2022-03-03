/*    Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
A. Make a particular member function of one class as a friend function of another class for addition.
B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.
Make least possible classes to demonstrate all the above in a single program without conflict.*/

#include<iostream>
using namespace std;

class num2;
class num1{
	private:
		float x,y;
	public:
		num1(float a = 0, float b = 0){
			x = a;
			y = b;
		}
		void add(num1,num2);
		friend void sub(num1,num2);
		friend void mul(num1,num2);
		friend void div(num1,num2);
};
class num2{
	private:
		float x,y;
	public:
		num2(float a = 0, float b = 0){
			x = a;
			y = b;
		}
		friend void num1::add(num1,num2);
		friend void sub(num1,num2);
		friend void mul(num1,num2);
		friend void div(num1,num2);
};
void num1::add(num1 a,num2 b){
	cout<<"\nThe sum is "<<a.x+b.x<<","<<a.y+b.y;
}
void sub(num1 a, num2 b){
	cout<<"\nThe difference is "<<a.x-b.x<<","<<a.y-b.y;
}
void mul(num1 a, num2 b){
	cout<<"\nThe multiplication is "<<a.x*b.x<<","<<a.y*b.y;
}
void div(num1 a, num2 b){
	cout<<"\nThe division is "<<a.x/b.x<<","<<a.y/b.y;
}

int main(){
	num1 h(2,2),o;
	num2 i(2,2);
	o.add(h,i);
	sub(h,i);
	mul(h,i);
	div(h,i);
	return 0;
}
