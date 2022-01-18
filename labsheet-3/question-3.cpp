/*Create a class called carpark that has int data member for car id, int data member for 
 charge/hour, and float data member for the parked time. Make functions to set data members
 and show the charges and parked hours of the corresponding car id. Make functions for setting
 and showing the data members. Member function should be called from other functions.
*/
#include<iostream>
using namespace std;

class carpark{
	int id,charge;
	float time;
	public:
	void setting(){
		cout<<"Enter the car id: ";
		cin>>id;
		cout<<"Enter the charge per hour: ";
		cin>>charge;
		cout<<"Enter the time in hour: ";
		cin>>time;
	}
	void showing(){
		cout<<"\ncar ID-"<<id;
		cout<<"\ncharge per hour-"<<charge;
		cout<<"\nParked time-"<<time;	
	}
};
int main(){
	carpark c;
	c.setting();
	c.showing();
	return 0;
}
