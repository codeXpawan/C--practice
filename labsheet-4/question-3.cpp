/*Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope".
Your program should be made such that it should show the order of constructor and destructor invocation.
 */

#include<iostream>
#include<cstring>
using namespace std;
class Department{
	char *id;
	char *name;
	public:
	Department(char *ipt1,char *ipt2){
		id = new char[strlen(ipt1)];
		name = new char[strlen(ipt2)];
		strcpy(name,ipt2);
		strcpy(id,ipt1);
		cout<<"\nConstructor called";
	}
	void show(){
		cout<<"Department ID- "<<id<<endl;
		cout<<"Department Name- "<<name<<endl;
	}
	~Department(){
		cout<<"Object n goes out of the scope";
	}
};
int main(){
	char id[20],name[20];
	cout<<"Enter the Department ID: ";
	cin>>id;
	cout<<"Enter the Department Name: ";
	cin>>name;
	Department d(id,name);
	d.show();
	return 0;
}
