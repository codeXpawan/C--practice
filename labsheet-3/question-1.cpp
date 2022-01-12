/*Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale
  and vice versa using the basic concept of class and object. Make separate classes for Celsius 
  and Fahrenheit which will have the private members that hold the temperature value and make 
  conversion functions in each class for conversion from one to another. For example, you need 
  to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value. Formula(f = c*9/5 + 32)
 */
#include<iostream>
using namespace std;

class Celsius{
	private:
		float temp;
	public:
		void ipt(){
			cin>>temp;
		}
		void toFahrenheit(){
			temp = (temp*9/5)+32;
			cout<<"The value in Fahrenheit is: "<<temp;
		}
};
class Fahrenheit{
	private:
		float temp;
	public:
		void ipt(){
			cin>>temp;
		}
		void toCelsius(){
			temp = (5*(temp-32))/9;
			cout<<"The value in Celsius is: "<<temp;
		}
};
int main(){
	Celsius c;
	Fahrenheit f;
	int d;
	cout<<"To convert from Celsius to Fahrenheit press 1 else for vice-versa press 0: ";
	cin>>d;
	if(d==1){
		cout<<"Enter the Temperature in Celsius: ";
		c.ipt();
		c.toFahrenheit();
	}
	else{
		cout<<"Enter the Temperature in Fahrenheit: ";
		f.ipt();
		f.toCelsius();
	}
	return 0;
}
