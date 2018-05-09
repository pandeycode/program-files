#include<iostream>
#include<string>
using namespace std;

class addition
{
    int a,b,addition;
    public:
    void add()
    {
        cout<<endl<<"Enter the value of two operand"<<endl;
        cin>>a>>b;
        addition=a+b;
        cout<<endl<<"Addition="<<addition;
    }
};

int check_input()
{
cout<<"if you want to check another addition then enter yes otherwise enter no:";
string input;
cin>>input;
if(input.compare("yes")==0)
{
    return 1;
}
else 
{
    return -1;
}
}


int main()
{
  int m=1,n=1,value;
  
    addition check[n];
   

while(m==n)
{
    check[n].add();

    cout<<endl<<"Want to check another addition then press yes otherwise no:";
    value=check_input();

    if(value==1)
    {
        n=n+1;
        m=n;
    }
    else{
        n=n-1;
    }
}
return 0;
}