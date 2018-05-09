#include<iostream>
#include<limits>
#include<string>
using namespace std;
class operation
{
	string *choice=new string;
	int *number_a=new int;
	int *number_b=new int;
	int *addition=new int;
	int *substraction=new int;
	int *multiplication=new int;
	int *division=new int;
	int *modulous=new int;
	int *null_value=new int;
	public:
	void input_operand()
	{
	cout<<endl<<"Enter The Value Of Two Operand"<<endl<<"Operand1=";
	cin>>*number_a;
	cout<<"Operand1=";
	cin>>*number_b;	
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	}
	int& operation_choice()
	{
		cout<<endl<<"Enter The Name Of The Operation You Want To Perform On The Operand"<<endl<<"Operation=";
		getline(cin,*choice);
		
		if(choice->compare("addition")==0)
		{
			*addition=*number_a+*number_b;
			cout<<endl<<"Addition=";
			return *addition;
		}
		else if(choice->compare("multiplication")==0)
		{
			*multiplication=*number_a*(*number_b);
		 	cout<<endl<<"Multiplication=";
			return *multiplication;
		}
		else if(choice->compare("substraction")==0)
		{
		*substraction=*number_a-*number_b;
		cout<<endl<<"Substraction=";
		return *substraction;
		}
		else if(choice->compare("division")==0)
		{
			*division=*number_a/(*number_b);
			cout<<endl<<"Division=";
			return *division;
		}
		else if(choice->compare("modulous")==0)
		{
			*modulous=*number_a&*number_b;
			cout<<endl<<"Modulous=";
			return *modulous;
		}
		else
		{
			cout<<endl<<"Wrong Operator"<<endl<<"Null=";
			return *null_value=0;
			
			
		}
		
		
	}
	
};

int main()
{
	operation *value=new operation;
	int *return_value=new int;
	value->input_operand();
	*return_value=value->operation_choice();
	cout<<*return_value;
	return 0;
}