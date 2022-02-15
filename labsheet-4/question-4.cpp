/*Assume that one constructor initializes data member say num_vehicle, hour, and rate. 
There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. 
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
 */

#include<iostream>
using namespace std;
class Vehicle{
	int num_vehicle,hour,rate;
	public:
	Vehicle(){
		cout<<"Enter the vehicle-number, hour and rate: ";
		cin>>num_vehicle>>hour>>rate;
	}
	Vehicle(Vehicle *temp){
		num_vehicle = temp->num_vehicle;
		hour = temp->hour;
		rate = temp->rate;
		cout<<"Object copied!\n";
	}
	void total_charge(){
		int discount = 0;
		if(num_vehicle >= 10){
			discount = 0.1*(rate*hour);
		}
		cout<<"Total charge: "<<(rate*hour)-discount;
	}
};

int main(){
	Vehicle v;
	Vehicle c(&v);
	Vehicle c1 = v;
	c1.total_charge();
	return 0;
}
