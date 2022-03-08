/*Write two classes to store distances in meter-centimeter and feet-inch systems respectively. 
Write conversions functions so that the program can convert objects of both types*/
#include<iostream>
using namespace std;
class dist_f_i;
class dist_cm_m{
	float m,cm;
	public:
	void ipt(){
	cout<<"Enter the value of meter: ";
	cin>>m;
	cout<<"Enter the value of centimeter: ";
	cin>>cm;
	}
	friend void add(dist_cm_m &a, dist_f_i &b);
	void display(){
		cout<<"The distance is: "<<m<<"meter and "<<cm<<" centimeter.";
	}
};
class dist_f_i{
	float i,f;
	public:
	void ipt(){
	cout<<"Enter the value of feet: ";
	cin>>f;
	cout<<"Enter the value of inch: ";
	cin>>i;
	}
	friend void add(dist_cm_m &a,dist_f_i &b);
	void display(){
		cout<<"The distance is: "<<f<<"feet and "<<i<<" inch.";
	}
};
void add(dist_cm_m &a,dist_f_i &b){
	int ch;
	cout<<"\nPress 1 for meter-centi:";
       	cout<<"\nPress 2 for feet-inch:";
 	cout<<"\nEnter your choice:";
 	cin>>ch;
 	if(ch==1)
 	{
  		dist_cm_m d;
  		int c=(a.m*100+a.cm+b.f*30.48+b.i*2.54);
  		if(c>=100)
  		{
   			d.m=c/100;
   			d.cm=c%100;
  		}
  		else
  		{
   			d.m=0;
   			d.cm=c;
  		}
  		d.display();
 	}
 	else
 	{
  		dist_f_i d;
  		int i=(a.m*39.37+a.cm*.3937008+b.f*12+b.i);
  		if(i>=12)
  		{
   			d.f=i/12;
   			d.i=i%12;
  		}
  		else
  		{
   			d.f=0;
   			d.i=i;
  		}
 		d.display();
	 }
}

int main(){
	dist_cm_m a;
	dist_f_i b;
	a.ipt();
	b.ipt();
	add(a,b);
	return 0;
}

