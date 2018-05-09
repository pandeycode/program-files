#include<iostream>
using namespace std;
class operation
{

	int a,b,addition,substraction,multiplication,division,remainder;
	
   public:
	operation()
	{
	cout<<endl<<"ENTER THE TWO VALUES FOR THE OPERATION "<<endl<<"A=";
	cin>>a;
	cout<<endl<<"B=";
	cin>>b;
	addition=a+b;
	substraction=a-b;
	multiplication=a*b;
	division=a/b;
	remainder=a%b;
	}


	operation operator+(operation temp)
	{
		addition=addition+temp.addition;
		cout<<endl<<"ADDITION="<<addition;
	}
operation operator-(operation temp)
	{
		substraction=substraction+temp.substraction;
		cout<<endl<<"SUBSTRACTION="<<substraction;
	}
	operation operator*(operation temp)
	{
		multiplication=multiplication+temp.multiplication;
		cout<<endl<<"MULTIPLICATION="<<multiplication;
	}
	operation operator/(operation temp)
	{
		division=division+temp.division;
		cout<<endl<<"DIVISION="<<division;
	}
	operation operator%(operation temp)
	{
		remainder=remainder+temp.remainder;
		cout<<endl<<"REMAINDER="<<remainder;
	}
	
};
int main()
{
	operation input1,input2;
	input1.operator+(input2);
	input1.operator-(input2);
	input1.operator*(input2);
	input1.operator/(input2);
	input1.operator%(input2);
	
	return 0;
}