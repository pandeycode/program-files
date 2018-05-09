#include<iostream>
using namespace std;
class operation2;
class result;
class operation1
{
int a,b,addition,substraction,multiplication,division,remainder;
	public:
	operation1()
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
	friend result calculate(operation1,operation2,result);
};
class operation2
{
int a,b,addition,substraction,multiplication,division,remainder;
	public:
	operation2()
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
	friend result calculate(operation1,operation2,result);
};

class result
{
	int addition,substraction,multiplication,division,remainder;
	public:
	friend result calculate(operation1,operation2,result);
	void output()
	{
		cout<<endl<<"ADDITION="<<addition<<endl<<"SUBSTRACTION="<<substraction<<endl<<"DIVISION="<<division<<endl<<"MULTIPLICATION="<<multiplication<<endl<<"REMAINDER="<<remainder<<endl;
		
	}
};
result calculate(operation1 temp1,operation2 temp2,result temp3)
{
	temp3.addition=temp1.addition+temp2.addition;
	temp3.substraction=temp1.substraction+temp2.substraction;
temp3.multiplication=temp1.multiplication+temp2.multiplication;
temp3.division=temp1.division+temp2.division;
	temp3.remainder=temp1.remainder+temp2.remainder;
	return temp3;
}
int main()
{
	operation1 input1;
	operation2 input2;
	result output;
	output=calculate(input1,input2,output);
	output.output();
	return 0;
	
}