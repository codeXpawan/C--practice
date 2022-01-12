/*Assume that employee will have to pay 10 percent income tax to the government. 
 Ask user to enter the employee salary. Use inline function to display the net payment 
 to the employee by the company.
 */
#include<iostream>
using namespace std;

inline void netPayment(float);
int main(){
	float salary;
	cout<<"Enter the salary: ";
	cin>>salary;
	netPayment(salary);
	return 0;
}
inline void netPayment(float net){
	net = net - (0.1*net);
	cout<<"The net payment is: "<<net;
}
