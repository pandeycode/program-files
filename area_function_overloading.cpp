#include<iostream>
#define pi 3.14
using namespace std;
int area(int);
int area(int,int);
float area(float);
int main()
{
	
	int length,bredth,side;
	float radius;
	cout<<"--------------------------------------------------------------------------------------------------------------"<<endl<<"\t Enter the value of length,bredth,side and the radius."<<endl;
	cout<<"Length=";
	cin>>length;
	cout<<"Bredth=";
	cin>>bredth;
	cout<<"Side=";
	cin>>side;
	cout<<"Radius=";
	cin>>radius;
	
	int square=area(side);
	int rectangle=area(length,bredth);
	float circle=area(radius);
	
	cout<<"--------------------------The area of square ,rectangle and circle is given below----------------------"<<endl;
	cout<<endl<<"\t   1. AREA OF SQUARE="<<square<<endl;
	cout<<"\t   2. AREA OF RECTANGLE="<<rectangle<<endl;
	cout<<"\t   3.AREA OF CIRCLE="<<circle<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
	return 0;
}

int area(int s)
{
	return(s*s);
}

int area(int l,int b)
{
	return(l*b);
}

float area(float r)
{
	
	return(pi*r*r);
}