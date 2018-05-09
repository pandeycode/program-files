#include<iostream>
using namespace std;
class addition
{
	int a,b,c;
	public:
	addition()
	{
	cout<<endl<<"ENTER THE TWO VALUES FOR ADDITION "<<endl<<"A=";
	cin>>a;
	cout<<endl<<"B=";
	cin>>b;
	c=a+b;
	}
	addition operator+(addition temp)
	{
		c=c+temp.c;
		cout<<endl<<"sum="<<c;
	}
};
int main()
{
	addition c1,c2;
	addition c3=c1.operator+(c2);
	return 0;
}