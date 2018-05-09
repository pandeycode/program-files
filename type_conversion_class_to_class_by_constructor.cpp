#include<iostream>
using namespace std;
class value2
{
int x,y;
public:
value2()
{
    x=2;y=3;    
}
int x_value()
{
    return x;
}
int y_value()
{
    return y;
}
};
class value1
{
int a,b;
public:
value1()
{
    a=5;
    b=6;
}
value1(value2 temp)
{
a=temp.x_value();
b=temp.y_value();

}
void output()
{
    cout<<a<<b;
}
} ;



int main()
{
    value1 obj1;

    value2 obj2;
    obj2.x_value();
    obj2.y_value();

    obj1=obj2;
    obj1.output();
    return 0;
}