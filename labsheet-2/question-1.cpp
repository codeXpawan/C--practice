/*Write a program to set a structure to hold a date (mm,dd and yy),
 assign values to the members of the structure and print 
 out the values in the format 11/28/2004 by function. Pass the structure to the function*/
#include<iostream>
using namespace std;

struct date{
	int mm,dd,yy;
};
struct date display(struct date);
int main(){
	struct date d;
	cout<<"Enter the date you want to display in month, day and year format:";
	cin>>d.mm>>d.dd>>d.yy;
	display(d);
	return 0;
}
struct date display(struct date temp){
	cout<<temp.mm<<"/"<<temp.dd<<"/"<<temp.yy;
}
