#include<iostream>
using namespace std;
int currentSalary(float salary=20000, float increment=10);

int main(){
	cout<<"\nThe current salary of Chief executive officer is: "<<currentSalary(35000,9);
	cout<<"\nThe current salary of Information officer is: "<<currentSalary(25000,10);
	cout<<"\nThe current salary of System analyst is: "<<currentSalary(24000,12);
	cout<<"\nThe current salary of Programmer is: "<<currentSalary(18000,12);
	return 0;
}
int currentSalary(float salary,float increment){
	salary = salary + ((increment/100)*salary);
	return salary;
}
