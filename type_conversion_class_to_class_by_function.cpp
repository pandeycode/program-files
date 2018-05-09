#include<iostream>
using namespace std;

class value1
{
    int a,b;
    public:
    value1()
    {
        a=34;
        b=76;
    }
operator value2()
{
value2 temp;
temp.func(a,b);
return (value2 temp);
}

};
class value2
{
int c,d;
public:

value2()
{
  c=89;
 d=87;
}
void func(int temp1,int temp2)
{
    c=temp1;
    d=temp2;
}
void show()
{
    cout<<c<<d;
}
};

int main()
{
    value1 obj1;
    value2 obj2;
    obj2=obj1;
    obj2.show();
    return o;

}