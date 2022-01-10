#include<iostream>
using namespace std;

int feet_to_inch();
void feet_to_inch(float);
void feet_to_inch(float *);

int main(){
	float feet;
	cout<<"Enter the length in feet:";
	feet = feet_to_inch();
	feet_to_inch(feet);
	feet_to_inch(&feet);
}
int feet_to_inch(){
	float f;
	cin>>f;
	cout<<"\nConverted value from function with no argument is: "<<f*12;
	return f;
}
void feet_to_inch(float fe){
	cout<<"\nConverted value from function with one argument is: "<<fe*12;
}
void feet_to_inch(float *fee){
	cout<<"\nConverted value from function using pass by reference is: "<<*fee*12;
}
