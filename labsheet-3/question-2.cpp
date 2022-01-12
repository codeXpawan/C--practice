/*Assume that you want to check whether the number is prime or not. Write a program that 
asks for numbers repeatedly. When it finishes checking a number the program asks if the 
user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use 
the object-oriented concept.
 */
#include<iostream>
using namespace std;

class Prime{
	int x;
	public:
	void ipt(){
		cin>>x;
	}
	void check_prime();
};
void Prime::check_prime(){
	int check=0;
	for(int i = 2;i<=x/2;i++){
		if(x%i == 0){
			check = 1;
			break;
		}
	}
	if(check == 1)
		cout<<"It's a Prime number.\n";
	else
	cout<<"It's not a Prime number.\n";
}
int main(){
	Prime p;
	char ans = 'y';
	while(ans != 'n'){
		cout<<"Enter the value: ";
		p.ipt();
		p.check_prime();
		cout<<"Do you want to do another calculation 'y' for yes, 'n' for no: ";
		cin>>ans;
	}
	return 0;
}
