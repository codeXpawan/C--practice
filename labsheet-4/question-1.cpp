/*Write a program that has a class to represent time. The class should have constructors to 
 initialize data members hour, minute, and second to 0 and to initialize them to values passed 
 as arguments. The class should have a member function to add time objects and return the 
 result as a time object. There should be functions to display time in 12-hour and 24-hour format.
*/
#include <iostream>
using namespace std;

class time{
	private:
		int dd=0,hh,mm,ss;
	public:
		time(int x=0,int y=0,int z=0){
			hh = x;
			mm = y;
			ss = z;
		}
		time add(time t){
			t.hh += hh;
			t.mm += mm;
			t.ss += ss;
			if(t.ss>60){
				t.ss = t.ss%60;
				t.mm++;
			}
			if(t.mm>60){
				t.mm = t.mm%60;
				t.hh++;
			}
			if(t.hh>24){
				t.hh = t.hh%24;
				t.dd++;
			}
			return t;
		}
		void time12(){
			cout<<"Time in 12 hour format:\n";
			if(hh>12){
				hh=hh%12;
				cout<<dd<<"day  "<<hh<<":"<<mm<<":"<<ss<<"  PM";
			}
			else{
				cout<<dd<<"day  "<<hh<<":"<<mm<<":"<<ss<<"  AM";
			}
		}
		void time24(){
			cout<<"\nTime in 24 hour format:\n";
			cout<<dd<<"day  "<<hh<<":"<<mm<<":"<<ss;
		}
};

int main(){
	int x,y,z;
	cout<<"Enter the Time-1 in format hour-minute-second:";
	cin>>x>>y>>z;
	class time t1(x,y,z);
	cout<<"Enter the Time-2 in format hour-minute-second:";
	cin>>x>>y>>z;
	class time t2(x,y,z);
	t1 = t1.add(t2);
	t1.time24();
	t1.time12();
	return 0;
}
