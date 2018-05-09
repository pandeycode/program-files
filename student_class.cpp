#include<iostream>
#include<string>
using namespace std;
class student
{
private:
string student_name;
int roll_no;
public:
void input_data(string x,int a)
{
	student_name=x;
	a=roll_no;
}
void show_data()
{
	cout<<"student name="<<student_name<<endl<<"roll no="<<roll_no;
}
}member1;

int main()
{
member1.input_data("himanshu pandey",456);	
member1.show_data();
return 0;	
}