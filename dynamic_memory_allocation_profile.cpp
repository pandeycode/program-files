#include<iostream>
#include<limits>
#include<string>
using namespace std;
class person_profile
{
string *name=new string;
string *sex=new string;
int *age=new int;
public:

void input_in_profile()
{
cout<<endl<<"Enter Data"<<endl<<"Name=";
	getline(cin,*name);
	cout<<"Sex=";
	getline(cin,*sex);

	cout<<"Age=";
	cin>>*age;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
	person_profile& compare(person_profile *temp,person_profile *temp1)
	{
	   if(*age>*temp->age && *age>*temp1->age)
		
		return *this;
		else if(*temp->age>*age && *temp->age>*temp1->age)
		return *temp;
		else
		return *temp1;
	}
	void output_of_profile()
	{
		
		cout<<endl<<"Profile Having Maximum Age"<<endl;
		cout<<"Name:"<<*name<<endl<<"Sex:"<<*sex<<endl<<"Age:"<<*age<<endl;
	}
};

int main()
{

	        person_profile *person1=new person_profile;
		    person_profile *person2=new person_profile;
			person_profile *person3=new person_profile;
			person_profile *person=new person_profile;
			
			person1->input_in_profile();
			person2->input_in_profile();
			person3->input_in_profile();
			*person=person1->compare(person2,person3);
			delete person1;
			delete person2;
			delete person3;
			person->output_of_profile();
			
			
			return 0;
			
			
}