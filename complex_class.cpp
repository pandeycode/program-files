#include<iostream>
using namespace std;
class complex
{
private:
	int number_a,number_b;
public:
	
complex input_data()
{
	
	cin>>number_a>>number_b;
	
}

complex add_data(complex y)
{
	complex temp;
	temp.number_a=y.number_a+number_a;
	temp.number_b=y.number_b+number_b;
	return temp;	
}

void output_data()
{
	cout<<endl<<number_a<<" + "<<number_b<<"i"; 
	
}
};

int main()
{
complex c1,c2,c3;
cout<<"-------------------------------------------------------"<<endl<<"\t ENTER THE VALUES OF FIRST COMPLEX NUMBER"<<endl;
c1.input_data();
cout<<"-------------------------------------------------------"<<endl<<"\t ENTER THE VALUES OF SECOND COMPLEX NUMBER"<<endl;
c2.input_data();
c3=c2.add_data(c1);
cout<<endl<<"complex number after addition";
c3.output_data();
return 0;
}

