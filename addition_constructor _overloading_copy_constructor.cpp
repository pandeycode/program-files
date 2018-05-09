#include<iostream>
using namespace std;
class addition
{
int a,b,c;
public:
	addition(int temp1,int temp2)
	{
		a=temp1;
		b=temp2;
		c=a+b;
		cout<<endl<<"sum="<<c<<endl;
	}
	addition(int temp)
	{
		a=temp;
		cout<<"ENTER THE VALUE OF THE SECOND NUMBER FOR ADDITION"<<endl;
		cin>>b;
		c=a+b;
		cout<<"sum="<<c<<endl;
	}
	addition()
	{
	cout<<"ENTER THE VALUE OF THE FIRST AND SECOND NUMBER FOR ADDITION"<<endl;
		cin>>a>>b;
		c=a+b;
		cout<<"sum="<<c<<endl;
		
	}
	addition(addition temp1,addition temp2)
	{
		a=temp1.a+temp2.a;
		b=temp1.b+temp2.b;
	c=a+b;
	cout<<endl<<"sum="<<c<<endl;
	}
};

int main()
{
	addition c1(3,4),c2(78),c3;
	c4(c1,c3);
	return 0;
}