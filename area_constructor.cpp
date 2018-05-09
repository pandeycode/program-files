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

int main()

{
	input_for_area input;
	output_for_area output(input);
	return 0;
}