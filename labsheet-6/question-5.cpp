/*Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number of its own with the base. 
Finally, make a third class that is a friend of derived and calculate the difference of the base complex number and its own complex number.*/
#include<iostream>
using namespace std;
class base{
	protected:
	float real,img;
	public:
	//base():real(0),img(0){}
	//base(float x, float y):real(x),img(y){}
	void getdata(){
		cout<<"Enter the real and imaginary part: ";
		cin>>real>>img;
	}
};
class diff;
class derived:public base{
	float real1,img1;
	public:
	void d_getdata(){
		getdata();
		cout<<"Enter the second real and imaginary part: ";
		cin>>real1>>img1;
	}
	void add(){
		real1 += real;
		img1 += img;
	}
	void a_showdata(){
		cout<<"\nAfter the addition the real part is "<<real1<<" and imaginay part "<<img1;
	}
	friend class diff;
};
class diff{
	float real2,img2;
	public:
	void new_data(){
		cout<<"\nEnter the real and imaginary part of complex number to difference with the sum: ";
		cin>>real2>>img2;
	}
	void differe(derived d){
		real2 -= d.real;
		img2 -= d.img;
	}
	void d_showdata(){
		cout<<"\nAfter difference the complex number hsve real part "<<real2<<"and imaginary part "<<img2;
	}
};
int main(){
	derived d;
	diff di;
	d.d_getdata();
	d.add();
	d.a_showdata();
	di.new_data();
	di.differe(d);
	di.d_showdata();

	return 0;
}
