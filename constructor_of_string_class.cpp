#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<endl<<"Program to use constructor of string class "<<endl;
string string_1("starting with string functions");
cout<<endl<<"initialisation of string valriable with raw string:"<<endl<<string_1<<endl;
string string_2(12,'h');
cout<<endl<<"initialisation of string variable with a character and its number of occurence:"<<endl<<string_2<<endl;
string string_3("himanshu pandey",9,6);
cout<<endl<<"copies raw string from 9 index upto 6 character to the string variable"<<endl<<string_3<<endl;
string string_4(string_3,1,5);
cout<<endl<<"copies string from 1 index upto 5 character to the string variable"<<endl<<string_4<<endl;
string string_5(string_1.begin(),string_1.begin()+8);
cout<<endl<<"function that copies string and initialises to the string variable from beginning to the stated end point :"<<endl<<string_5<<endl;
 string_1.append(" and constructor");
cout<<endl<<"append function add a given string to a perticular string"<<string_1<<endl;

string_1.append(string_3,0,6);

return 0;

}