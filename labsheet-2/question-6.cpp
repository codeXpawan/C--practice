/* Write a program that displays the current monthly salary of chief executive officer,
  information officer, and system analyst, programmer that has been increased by 9, 10, 12,
  and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

Chief executive officer Rs. 35000/m

Information officer Rs. 25000/m

System analyst Rs. 24000/m

Programmer Rs. 18000/m

Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
 */
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
