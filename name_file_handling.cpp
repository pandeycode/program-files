#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    char print;
    ifstream name;
    name.open("my name.txt");
    print=name.get();
    while(!name.eof())
    {
        cout<<print;
        print=name.get();
    }
    name.close();
    return 0;
}