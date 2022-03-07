/*Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. 
Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.*/
#include<iostream>
using namespace std;
class dist{
	float m, cm;
	public:
	dist():m(0),cm(0){}
	dist(float x, float y):m(x),cm(y){}
	dist convert(){
		return dist(m*100,cm/100);
	}
	void display(){
		cout<<m<<" and "<<cm;
	}

};
int main(){
	dist d(1,100),ans;
	ans = d.convert();
	cout<<"The converted value to centimeter and meter is ";
	ans.display();
	return 0;
}
