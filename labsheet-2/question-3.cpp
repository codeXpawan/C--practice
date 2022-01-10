#include <iostream>
using namespace std;
namespace Square{
	int num;
	int fun(int x){
		return x*x;
	}
}
namespace Cube{
	int num;
	int fun(int x){
		return x*x*x;
	}
}
int main(){
	cout<<"Enter the value to be stored in Square namespace: ";
	cin>>Square::num;
	cout<<"Enter the value to be stored in Cube namespace: ";
	cin>>Cube::num;
	cout<<"Accourding to question.........\n The cube of value stored in Square namespace: ";
	cout<<Cube::fun(Square::num);
	cout<<"\nThe square of value stored in Cube namespace: ";
	cout<<Square::fun(Cube::num);
}
