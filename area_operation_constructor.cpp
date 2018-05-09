#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;
class input_for_area
{
public:
	int radius,square_side,length,bredth,cube_side;
	input_for_area()
	{
	   cout<<endl<<"_____________________________________________________________________";
		cout<<endl<<"\t INPUT THE FOLLOWING ASKED DATA";
		cout<<endl<<"_____________________________________________________________________";
		cout<<endl<<"-----------------------------------------------------------";
		cout<<endl<<"ENTER THE RADIUS OF CIRCLE TO CALCULATE AREA OF CIRCLE=";
		cin>>radius;
		cout<<endl<<"ENTER THE SIDE OF SQUARE TO CALCULATE AREA OF A SQUARE=";
		cin>>square_side;
		cout<<endl<<"ENTER THE LANGTH AND BREDTH OF THE RECTAGLE TO CALCULATE AREA OF RECTANGLE"<<endl<<"LENGTH=";
	   cin>>length;
     cout<<"BREDTH="<<endl;
	  cin>>bredth;
		cout<<endl<<"ENTER THE SIDE OF THE CUBE TO CALCULATE VOLUME OF CUBE=";
		cin>>cube_side;
		cout<<endl<<"-----------------------------------------------------------"<<endl;
	}
};
class output_for_area
{

	int cube,rectangle,square;
	float circle;
	public:
	output_for_area(input_for_area temp)
	{
	cout<<endl<<"-----------------------------------------------------------";
		cout<<endl<<"AREA OF CIRCLE=";
		circle=pi*(temp.radius*temp.radius);
		cube=pow(temp.cube_side,3);
		square=pow(temp.square_side,2);
		rectangle=temp.length*temp.bredth;
	cout<<circle<<endl<<"AREA OF SQUARE="<<square<<endl<<"AREA OF RECTANGLE="<<rectangle<<endl<<"VOLUME OF CUBE"<<cube;
	cout<<endl<<"-----------------------------------------------------------";
	
	
	}
};

class input_for_operation
{
public:
	int number_a,number_b;
	
	input_for_operation()
	{
	   cout<<endl<<"_____________________________________________________________________";
		cout<<endl<<"ENTER THE VALUES FOR THE BASIC ARITHMATIC OPERATIONS"<<endl;
		cout<<endl<<"_____________________________________________________________________"<<endl;
		cout<<endl<<"-----------------------------------------------------------";
		cout<<endl<<"ENTER THE VALUE OF NUMBER A=";
		cin>>number_a;
		cout<<endl<<"ENTER THE VALUE OF NUMBER B=";
		cin>>number_b;
		cout<<endl<<"-----------------------------------------------------------";
	}
	
};

class output_for_operation
{
	int addition,substraction,multiplication,division,remainder;
	public:
	
	output_for_operation(input_for_operation temp)
	 
	 {
	 cout<<endl<<endl<<"_____________________________________________________________________";
		cout<<endl<<"RESULT OF SOME BASIC ARITHMATIC OPERATIONS ACCORDING TO THE INPUT VALUES";
		 cout<<endl<<"_____________________________________________________________________";
		 		cout<<endl<<endl<<"-----------------------------------------------------------";
				addition=temp.number_a+temp.number_b;
				multiplication=temp.number_a*temp.number_b;
				division=temp.number_a/temp.number_b;
				substraction=temp.number_a-temp.number_b;
				remainder=temp.number_a%temp.number_b;
				cout<<endl<<"ADDITION="<<addition<<endl<<"SUBSTRACTION="<<substraction<<endl<<"MULTIPLICATION="<<multiplication<<endl<<"DIVISION="<<division<<endl<<"REMAINDER="<<remainder;
				cout<<"-----------------------------------------------------------";
	}
	
};
void area()
{
	input_for_area input;
	output_for_area output(input);
	
}

void operation()
{
	input_for_operation operation_input;
	output_for_operation operation_output=operation_input;
}
int main()
{

	area();
	operation();
	
	return 0;
}