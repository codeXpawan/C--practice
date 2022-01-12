/*Define two namespaces: Square and Cube. In both the namespaces, define an integer 
  variable named "num" and a function named "fun". The "fun" function in "Square" namespace,
  should return the square of an integer passed as an argument while the "fun" function in
  "Cube" namespace, should return the cube of an integer passed as an argument. In the 
  main function, set the integer variables "num" of both the namespaces with different 
  values. Then, compute and print the cube of the integer variable "num" of the "Square" 
  namespace using the "fun" function of the "Cube" namespace and the square of the integer
  variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.
 */
#include <iostream>
using namespace std;
namespace Square{
	int num;
	int fun(int x){
		return x*x;
	}
}
namespace Cube{
	int num;
	int fun(int x){
		return x*x*x;
	}
}
int main(){
	cout<<"Enter the value to be stored in Square namespace: ";
	cin>>Square::num;
	cout<<"Enter the value to be stored in Cube namespace: ";
	cin>>Cube::num;
	cout<<"Accourding to question.........\n The cube of value stored in Square namespace: ";
	cout<<Cube::fun(Square::num);
	cout<<"\nThe square of value stored in Cube namespace: ";
	cout<<Square::fun(Cube::num);
}
