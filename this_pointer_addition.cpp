#include<iostream>
using namespace std;
class addition
{
	int a,b,addition;
	public:
	addition & input()
	{
	int a,b;
	cout<<endl<<"ENTER THE VALUES OF A AND B FOR ADDITION"<<endl;
	cin>>a>>b;
	this->a=a;
	this->b=b;
	addition=a+b;
	return *this;
	}
	
	void output()
	{
		cout<<endl<<"SUM="<<addition<<endl;
	}
};

int main()
{
	addition sum,sum1;
	sum1=sum.input();
	
	sum.output();
	return 0;
}