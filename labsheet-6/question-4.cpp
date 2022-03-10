/*Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age) 
and with added unique features of student, and employee, and functionality to assign, change and delete records of student and employee. 
And make one member function for printing the address of the objects of classes (base and derived) using this pointer. 
Create two objects of the base class and derived classes each and print the addresses of individual objects. 
Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program*/


			//This answer is wrong!

#include<iostream>
#include<cstring>
using namespace std;
class person{
	char name[15];
	int age;
	public:
	void getdata(){
		char tname;
		cout<<"\nEnter the name: ";
		cin>>name;
		//name = new char[(strlen(tname))+1];
		//strcpy(name,tname);
		cout<<"\nEnter the age: ";
		cin>>age;
	}
	void showdata(int number){
		cout<<"\nData "<<number<<"\nName: "<<name<<"\nAge: "<<age;
	}
	//~person(){
		//cout<<"\nData Deleted.";
	//}
	void address(){
		cout<<"\nThe address of this object is "<<this;
	}
};
class student:public person{
	int student_id;
	public:
	void s_getdata(){
		getdata();
		cout<<"Enter the student id: ";
		cin>>student_id;
	}
	void s_showdata(int n){
		showdata(n);
		cout<<"\nStudent ID: "<<student_id;
	}
	//~student(){
		//cout<<"Data Deleted.";
	//}
		void show(int choice){
			//static int i = 0;
			switch(choice){
				case 1:
					s_getdata();
					break;
				case 2:
					s_getdata();
					break;
				case 3:
					//~student();
					break;
			}
			//i++;
		}
};
class employee:public person{
	int employee_id;
	float salary;
	public:
	void e_getdata(){
		getdata();
		cout<<"Enter the employee id: ";
		cin>>employee_id;
		cout<<"Enter the monthly salary of the employee: ";
		cin>>salary;
	}
	void e_showdata(int n){
		showdata(n);
		cout<<"\nemployee id: "<<employee_id<<"\nSalary: "<<salary;
	}
	//~employee(){
		//~person();
		//cout<<"\nData Deleted.";
	//}
		void show(int choice){
			switch(choice){
				case 1:
					e_getdata();
					break;
				case 2:
					e_getdata();
					break;
				case 3:
					//~employee();
					break;
			}
			//i++;
		}
};
int main(){
	int i=0,k=0;
	//student s;
	//employee e;
	char ans='y';
	int choice;
	while(ans != 'q'){
		cout<<"In which class you want to work('s' for student, 'e' for employe and 'q' to end):";
		cin>>ans;
		if(ans == 's'){
			student s[i];
			cout<<"1. Assign a new member.\n2. Change the data of a member.\n3. Delete a member.\nEnter your choice: ";
			cin>>choice;
			if(choice==1){
				s[i].show(choice);
				i++;
			}
			else if(choice==2){
				if(i == 0){
					cout<<"\nNo data! First enter the data.";
					break;
				}
				else{
					int chg;
					for(int j=0;j<i;j++)
						s[j].s_showdata(j+1);
					cout<<"\nWhich data you want to change: ";
					cin>>chg;
					s[chg-1].show(choice);
				}
			}
			else{
				if(i==0){
					cout<<"\nNo data! First enter the data.";
					break;
				}
				else{
					int del;
					for(int j=0;j<i;j++)
						s[j].s_showdata(j+1);
					cout<<"\nWhich data you want to delete: ";
					cin>>del;
					s[del-1].show(choice);
				}
			}
		}
		else if(ans == 'e'){
			employee e[k];
			cout<<"1. Assign a new member.\n2. Change the data of a member.\n3. Delete a member.\nEnter your choice: ";
			cin>>choice;
			if(choice==1){
				e[k].show(choice);
				k++;
			}
			else if(choice==2){
				if(k == 0){
					cout<<"\nNo data! First enter the data.";
					break;
				}
				else{
					int chg;
					for(int j=0;j<i;j++)
						e[j].e_showdata(j+1);
					cout<<"\nWhich data you want to change: ";
					cin>>chg;
					e[chg-1].show(choice);
				}
			}
			else{
				if(k==0){
					cout<<"\nNo data! First enter the data.";
					break;
				}
				else{
					int del;
					for(int j=0;j<i;j++)
						e[j].e_showdata(j+1);
					cout<<"\nWhich data you want to delete: ";
					cin>>del;
					e[del-1].show(choice);
				}
			}
		}
	}
	return 0;
}
