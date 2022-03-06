/*Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, 
while causing appropriate increments to the month and year (use the appropriate condition for leap year). 
The prefix and postfix operators in the Date class should behave exactly like the built-inincrement operators.*/
#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
	date():dd(0),mm(0),yy(0){}
	date(int d,int m, int y):dd(d),mm(m),yy(y){}
	date operator++(){
		++dd;
		if(dd>30){
			mm++;
			dd -=  30;
		}
		if(mm>12){
			yy++;
			mm -= 12;
		}
		return date(dd,mm,yy);
	}
	date operator++(int){
		dd++;
		if(dd>30){
			mm++;
			dd -=  30;
		}
		if(mm>12){
			yy++;
			mm -= 12;
		}
		return date(dd,mm,yy);
	}
	void show(){
		cout<<"\nDate: "<<dd<<"-"<<mm<<"-"<<yy;
	}
};
int main(){
	date d1(27,2,2001),d;
	d1++;
	d1.show();
	d = ++d1;
	d.show();
	return 0;
}
