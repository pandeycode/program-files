#include<iostream>
#include<string>
#include<limits>
#define strength 2
using namespace std;

class laptop
{
	string brand_name,processor,laptop_type,ram,accessories,screen_type,body_type,price;
	 
	static string screen_size,operating_system,hard_disk;
	public:
	static void input_static_data()
	
	{
		
cout<<endl<<"ENTER THE DEFAULT SCREEN SIZE OF LAPTOP ";

getline(cin,screen_size);
cout<<endl<<"ENTER THE DEFAULT OPERATING SYSTEM OF LAPTOP =";
getline(cin,operating_system);
cout<<endl<<"ENTER THE DEFAULT HARD DISK SIZE OF LAPTOP =";
getline(cin,hard_disk);

}
	void input_data();
	void show_data();
	
}description[strength];

string laptop::screen_size;
string laptop::operating_system;
string laptop::hard_disk;

int main()
{
	int i;
	
	for(i=1;i<=strength;i++)
	{
		description[i].input_data();
		if(i==1)
		{
				laptop::input_static_data();
		}
	}

	
	for(i=1;i<=strength;i++)
	{
	description[i].show_data();	
	}
	
	return 0;
}


void laptop::input_data()
{
cout<<endl<<"ENTER THE BRAND NAME OF LAPTOP=";
getline(cin,brand_name);
cout<<endl<<"ENTER THE PROCESSER OF THE LAPTOP=";
getline(cin,processor);
cout<<endl<<"ENTER THE LAPTOP TYPE =";
getline(cin,laptop_type);
cout<<endl<<"ENTER THE RAM OF THE LAPTOP =";
getline(cin,ram);
cout<<endl<<"ENTER THE ACCESSORIES COMES WITH THE LAPTOP=";
getline(cin,accessories);		
cout<<endl<<"ENTER THE SCREEN TYPE OF THE LAPTOP=";
getline(cin,screen_type);
cout<<endl<<"ENTER THE BODY TYPE OF THE LAPTOP=";
getline(cin,body_type);
cout<<endl<<"ENTER THE PRICE OF THE LAPTOP =";
getline(cin,price);	
}

void laptop::show_data()
{
	cout<<endl<<"___________________________________________________________________________";
	cout<<endl<<"BRAND NAME="<<brand_name<<endl<<"OPERATING SYSTEM="<<operating_system<<endl<<"RAM="<<ram<<endl<<"HARD DISK="<<hard_disk<<endl;
	cout<<"PROCESSOR="<<processor<<endl<<"SCREEN SIZE="<<screen_size<<endl<<"LAPTOP TYPE="<<laptop_type<<endl<<"SCREEN TYPE="<<screen_type<<endl;
	cout<<"BODY TYPE="<<body_type<<endl<<"PRICE="<<price<<endl<<"ACCESSORIES="<<accessories<<endl;
	cout<<"____________________________________________________________________________";
}
