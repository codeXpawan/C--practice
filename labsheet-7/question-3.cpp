/*Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. 
Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
*/
#include<iostream>
using namespace std;
class Student{
	public:
		virtual void display(){
			cout<<"\nI am from base class Student.";
		}
};
class Engineering:public Student{
	public:
		void display(){
			cout<<"\nI am from derived class Engineering.";
		}
};
class Medicine:public Student{
	public:
		void display(){
			cout<<"\nI am from derived class Medicine.";
		}
};
class Science:public Student{
	public:
		void display(){
			cout<<"\nI am from derived class Science.";
		}
};
int main(){
	Engineering e;
	Medicine m;
	Science s;
	Student *st[] = {&e,&m,&s};
	for(int i=0;i<3;i++){
		st[i]->display();
	}
	return 0;
}
