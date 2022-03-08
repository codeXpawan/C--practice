/*Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. 
Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.*/
#include<iostream>
using namespace std;
class dist{
	float m, cm;
	public:
	dist():m(0),cm(0){}
	//dist(float x, float y):m(x),cm(y){}
	void convert_m(int x, int y){
		m = static_cast<float>(x)+static_cast<float>(y)/100;
	}
	void convert_cm(int x, int y){
		cm = static_cast<float>(x)*100+static_cast<float>(y);
	}
	void diaplay(){
		cout<<m<<" and "<<cm;
	}
};
int main(){
	dist d;
	int ans,m,cm;
	cout<<"1.Convert the values to meter.\n2.Convert the valus to cm.";
	cout<<"The number you want to perform task: ";
	cin>>ans;
	if(ans == 1){
		cout<<"Enter the value of meter: ";
		cin>>m;
		cout<<"Enter the value of centimeter: ";
		cin>>cm;
		d.convert_m(m,cm);
	}
	else if(ans == 2){
		cout<<"Enter the value of meter: ";
		cin>>m;
		cout<<"Enter the value of centimeter: ";
		cin>>cm;
		d.convert_cm(m,cm);
	}
	cout<<"The converted value to centimeter and meter is ";
	d.diaplay();
	return 0;
}
