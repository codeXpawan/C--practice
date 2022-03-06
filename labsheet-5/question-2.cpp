/*Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and 
subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).*/

#include<iostream>
#include <iterator>
using namespace std;
class coordinate{
	int x, y, z;
	public:
	coordinate(int xx=0,int  yy=0, int zz=0){
		x = xx;
		y = yy;
		z = zz;
	}
	friend coordinate operator+(coordinate,coordinate);
	friend coordinate operator-(coordinate,coordinate);
	void display(){
		cout<<"("<<x<<","<<y<<","<<z<<")";
	}
};
coordinate operator+(coordinate a,coordinate b){
	return coordinate(a.x+b.x,a.y+b.y,a.z+b.z);
}
coordinate operator-(coordinate a, coordinate b){
	return coordinate(a.x-b.x,a.y-b.y,a.z-b.z);
}

int main(){
	coordinate sum,diff;
	coordinate o1(4,5,6);
	coordinate o2(1,2,3);
	sum = o1 + o2;
	diff = o1 - o2;
	cout<<"\nThe sum is ";
	sum.display();
	cout<<"\nThe difference is ";
	diff.display();
	return 0;
}
