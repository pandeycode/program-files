#include<iostream>
#include<string>
#include<limits>
#define strength 3
using namespace std;

class hostel
{
private:
	string name;
	int room_no,roll_no;
	static string branch;
	public:
	static void set_branch()
	{
	cout<<"FIRST ENTER THE BRANCH OF WHICH YOU WANT TO ENTER THE STUDENT DETAIL"<<endl;
	getline(cin,branch);
		
	}
	void set_data()
	{
		cout<<"_________________________________________________________________________"<<endl<<"\t\t ENTER THE NAME OF THE STUDENT"<<endl;
		getline(cin,name);
		cout<<endl<<"\t\t ENTER ROOM NUMBER "<<endl;
		cin>>room_no;
		cout<<endl<<"\t\t ENTER ROLL NUMBER "<<endl;
		cin>>roll_no;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		
		cout<<endl;
	}
	
	void show_data()
	{
	cout<<"_________________________________________________________________________"<<endl;
	cout<<"NAME="<<name<<endl<<"BRANCH="<<branch<<endl<<"ROOM NO="<<room_no<<endl<<"ROLL NO="<<roll_no<<endl;
		
	}
}student[strength];

string hostel::branch;
int main()
{

int i;
hostel::set_branch();


	for(i=0;i<strength;i++)
	{
		student[i].set_data();
	}
	
	for(i=0;i<strength;i++)
	{
		student[i].show_data();
	}
	return 0;
}