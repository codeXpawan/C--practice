/*    Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments

-  veena, guitar, sitar, sarod and mandolin under string()

-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()

-  tabla, mridangam, bangos, drums and tambour under perc()

It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

Type of instruments to be displayed

a.  String instruments

b.  Wind instruments

c.  Percussion instruments

The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.*/
#include<iostream>
#include<string.h>
using namespace std;
class Musicians{
	char instruments[10][20];
	public:
	void string(){
		strcpy(instruments[0],"veena");
	        strcpy(instruments[1],"guitar");
		strcpy(instruments[2],"sitar");
		strcpy(instruments[3],"sarod");
		strcpy(instruments[4],"mandolin");
	}
	void wind(){
		strcpy(instruments[0],"flute");
		strcpy(instruments[1],"clarinet");
	        strcpy(instruments[2],"saxophone");
		strcpy(instruments[3],"nadhaswaram");
		strcpy(instruments[4],"piccolo");
	}
	void perc(){
		strcpy(instruments[0],"tabla");
		strcpy(instruments[1],"mridangam");
		strcpy(instruments[2],"bangos");
		strcpy(instruments[3],"drums");
		strcpy(instruments[4],"tambour");
	}
	void display(){
		for(int i = 0;i<5;i++){
			cout<<i+1<<"."<<instruments[i]<<endl;
		}
	}
};
class TypeIns:public Musicians{
	public:
		void get(){
			cout<<"Type of instruments to be displayed:\n1.String instruments\n2.Wind instruments \n3.Percussion instruments";
		}
		void show(int choice){
			switch(choice){
				case 1:
					string();
					display();
					break;
				case 2:
					wind();
					display();
					break;
				case 3:
					perc();
					display();
					break;
			}
		}		
};
int main(){
	int choice;
	TypeIns t;
	t.get();
	cout<<"\nEnter the choice: ";
	cin>>choice;
	t.show(choice);
	return 0;
}
