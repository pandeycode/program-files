#include<iostream>
using namespace std;
class operation2;
class result1;
class operation1
{
	public:

	float number_a,number_b,addition,substraction,division,multiplication;
	
	friend istream& operator>>(istream& ,operation1);
	friend result1 operator+(operation1,operation2);
	void all_operation1()
	{
		addition=number_a+number_b;
		substraction=number_a-number_b;
		multiplication=number_a*number_b;
      division=number_a/number_b;
		
		
	}
	
};

class result1
{
public:
	float addition,substraction,division,multiplication;
	
	 
	friend ostream& operator<<(ostream&,result1);
	

	

};
class operation2
{	
	float number_a,number_b,addition,substraction,division,multiplication;
	friend result1 operator+(operation1,operation2);
   friend istream& operator>>(istream&,operation2);
public:
		void all_operation2()
	{
		addition=number_a+number_b;
		substraction=number_a-number_b;
		multiplication=number_a*number_b;
      division=number_a/number_b;
	
		
	}
	result1 operator+(operation1 temp1)
	 {
	 	result1 temp;
   temp.addition=temp1.addition+addition;
 temp.substraction=temp1.substraction+substraction;
 temp.multiplication=temp1.multiplication+multiplication;
 temp.division=temp1.division+division;
		
		return temp;
	 }
	
	
};

istream& operator>>(istream &cin,operation1 temp)
{
	cout<<"ENTER THE VALUES IN FIRST OBJECT"<<endl<<"\t"<<"A=";
	cin>>temp.number_a;
	cout<<endl<<"\t B=";
	cin>>temp.number_b;
	return cin;
}

istream& operator>>(istream &cin,operation2 temp)
{
	cout<<endl<<"ENTER THE VALUES IN SECOND OBJECT"<<endl<<"\t"<<"A=";
	cin>>temp.number_a;
	cout<<endl<<"\tB=";
	cin>>temp.number_b;
	return cin;
}


ostream& operator<<(ostream &cout,result1 temp) 
{
	cout<<endl<<"ADDITION OF THE OPERATIONS OF TWO OBJECTS"<<endl<<"\tADDITION="<<temp.addition<<endl<<"\tSUBSTRACTION="<<temp.substraction<<endl;
	cout<<"\tMULTIPLICATION"<<temp.multiplication<<endl<<"\tDIVISION"<<temp.division<<endl;
	return cout;
}
int main()
{
	operation1 input1;
	cin>>input1;/*operator>>(cin,input1);*/
	input1.all_operation1();
	operation2 input2;
	cin>>input2;
	input2.all_operation2();
	result1 output1;
	output1=input2.operator+(input1);
	cout<<output1;
	return 0;
}