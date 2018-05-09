#include<iostream>
#include<string>
using namespace std;
int main()
{
string string_1("starting with string functions");
cout<<endl<<"initialisation of string valriable with raw string:"<<endl<<string_1<<endl;
string string_2(12,'h');
cout<<endl<<"initialisation of string variable with a character and its number of occurence:"<<endl<<string_2<<endl;
string string_3("himanshu pandey",9,6);
cout<<endl<<"copies raw string from 9 index upto 6 character to the string variable"<<endl<<string_3<<endl;
string string_4(string_3,1,5);
cout<<endl<<"copies string from 1 index upto 5 character to the string variable"<<endl<<string_4<<endl;
return 0;

}