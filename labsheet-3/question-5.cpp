/*Assume that an object represents an employee report that contains information like 
  employee id, total bonus, total overtime in a particular year. Use an array of objects 
  to represent n employees' reports. Write a program that displays the report. Use setpara() 
  member function to set report attributes by passing the arguments and member function 
  displayreport() to show the report according to the parameter passed. Display the report
  in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...
*/
#include<iostream>
using namespace std;

class employee{
	int id,year;
	float bonus, overtime;
	public:
	void setpara(int i,float b,float o,int y){
		id = i;
		bonus = b;
		overtime = o;
		year = y;
	}
	void displayreport(){
		cout<<"\nAn employee with ID-"<<id<<" has received Rs."<<bonus<<" as a bonus";
		cout<<"\nand\nhad worked "<<overtime<<" hours as overtime in the year "<<year;
	}
};
int main(){
	int n;
	cout<<"How many data you want to add: ";
	cin>>n;
	employee e[n];
	for(int i=0;i<n;i++){
		int id,year;
		float bonus,overtime;
		cout<<"For data-"<<i+1;
		cout<<"\nEnter the id: ";
		cin>>id;
		cout<<"Enter the bonus: ";
		cin>>bonus;
		cout<<"Enter the overtime hours: ";
		cin>>overtime;
		cout<<"Enter the year when overtime is done: ";
		cin>>year;
		e[i].setpara(id,bonus,overtime,year);
	}
	for(int i =0;i<n;i++){
		e[i].displayreport();
	}
}
