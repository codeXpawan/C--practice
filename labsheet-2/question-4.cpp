#include<iostream>
using namespace std;
void larger(float *,float *,float *);

int main(){
	float t1,t2,large;
	cout<<"Enter the two temperature: ";
	cin>>t1>>t2;
	larger(&t1,&t2,&large);
	if(large == 1){
		cout<<"Temperature are equal.";
	}
	else{
		cout<<"The larger temperature is: "<<large;
	}
	return 0;
}
void larger(float *x,float *y,float *l){
	if(*x>*y){
		*l=*x;
	}
	else if(*y>*x){
		*l=*y;
	}
	else{
		*l = 1;
	}
}
