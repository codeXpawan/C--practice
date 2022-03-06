/*Write a program to compare two objects of a class that contains an integer value as its data member. 
Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), 
and less than or equal to(<=) operators using member operator functions.*/
#include<iostream>
using namespace std;
class comp{
	int x;
	public:
	comp(){
		cin>>x;
	}
	bool operator==(comp a){return x==a.x;};
	bool operator!=(comp a){return x!=a.x;};
	bool operator<=(comp a){return x<=a.x;};
	bool operator>=(comp a){return x>=a.x;};
	bool operator>(comp a){return x>a.x;};
	bool operator<(comp a){return x<a.x;};
};
int main(){
	cout<<"Enter the two numbers: ";
	comp o1,o2;
	if(o1 == o2) cout<<"They are equal.";
	else if(o1 > o2) cout<<"first value is greater than second.";
	else if(o1<o2) cout<<"First value is smaller than second.";
	else cout<<"Input error!";
	return 0;
}
