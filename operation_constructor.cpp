#include<iostream>
using namespace std;

class operations
{
	int number_a,number_b,addition,multiplication,substraction,division,remainder;
	public:
	operations()
	{
		cout<<"enter the value of two operand for the operation "<<endl<<"1st operand=";
		cin>>number_a;
		cout<<"2nd operand=";
		cin>>number_b;
		
	}
	
	void operate()
	{
	addition=number_a+number_b;
	multiplication=number_a*number_b;
	substraction=number_a-number_b;
	division=number_a/number_b;
	remainder=number_a%number_b;	
	
	}
 
	void print_output()
	{
		
		cout<<endl<<"ADDITION="<<addition<<endl<<"SUBSTRACTION="<<substraction<<endl<<"MULTIPLICATION="<<multiplication<<endl<<"DIVISION="<<division<<endl<<"REMAINDER="<<remainder<<endl;
		
	}
};
 
 int main()
 {
 	
	operations object1;
	object1.operate();
	object1.print_output();
	return 0;
 }