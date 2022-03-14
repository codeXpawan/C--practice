/*Create a class Person and two derived classes Employee and Student, inherited from class Person. 
Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.
*/
#include<iostream>
using namespace std;
class Person{
	public:
		void display(){
			cout<<"\nI am from base class Person.";
		}
};
class Employee:virtual public Person{
	public:
		void display(){
			cout<<"\nI am from derived class Employee.";
		}
};
class Student:virtual public Person{
	public:
		void display(){
			cout<<"I am from derived class Student.";
		}
};
class Manager:public Employee,public Student{
	public:
		void display(){
			cout<<"I am from derived class Manager.";
		}
};
int main(){
	Manager m;
	m.display();
	return 0;
}
