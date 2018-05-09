#include<iostream>
#include<string>
#include<limits>
#include<fstream>
using namespace std;
class hp_simple_laptop
{
	double input_price;
	string select_ram,input_ram;
	string select_processor,input_processor;
	string select_graphics,input_graphics;
	public:
	bool price()
	{
	cout<<endl<<"Enter your budget:";
	cin>>input_price;
	if(input_price>=15000)
	{
		return true;	
	}
	else
	{
		cout<<endl<<"You cannot buy this laptop because of your budget is insufficient";
	return false;
	}
		
	}
	bool ram()
	{
	cout<<endl<<"Enter the amount of RAM you want in your laptop:";
	cin>>input_ram;
	select_ram="2GB - 4GB";
	if(select_ram.compare(0,3,input_ram)==0 || select_ram.compare(6,3,input_ram)==0)
	{
		return true;
		
	}
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your RAM is not appropriate";
		return false;
		}
	}
	bool processor()
	{
	cout<<endl<<"Enter the kind of processor you need:";
	cin>>input_processor;
	select_processor="amd - pentium - i3";
	if(select_processor.compare(0,3,input_processor)==0 ||  select_processor.compare(6,7,input_processor)==0 || select_processor.compare(16,2,input_processor)==0)
	{
		return true;
		
	}
		else 
		{
			
		cout<<endl<<"You cannot buy this laptop because of your processor is not appropriate";	
		return false;
		}
	}
	bool graphics()
	{
	cout<<endl<<"Enter the kind of graphics you need:";
	cin>>input_graphics;
	select_graphics="intel520 - intel integrated";
	if(select_graphics.compare(0,8,input_graphics)==0 ||  select_graphics.compare(11,16,input_graphics)==0 || select_graphics.compare(0,5,input_graphics)==0 )
	{
		cout<<endl<<"You can purchase this laptop";
	return true;
	}
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your graphic is not appropriate";	
		return false;
		}
	}
	
};



class hp_office_laptop:public hp_simple_laptop
{
	
	double input_price;
	string select_ram,input_ram;
	string select_processor,input_processor;
	string select_graphics,input_graphics;
	public:
bool price()
	{
	cout<<endl<<"Enter your budget:";
	cin>>input_price;
	if(input_price>=27000)
	{
	return true;		
	}
	else
	{
		cout<<endl<<"You cannot buy this laptop because of your budget is insufficient";
	return false;
	}
		
	}
	bool ram()
	{
	cout<<endl<<"Enter the amount of RAM you want in your laptop:";
	cin>>input_ram;
	select_ram="4GB - 8GB";
	if(select_ram.compare(0,3,input_ram)==0 || select_ram.compare(6,3,input_ram)==0)
	{
		
		return true;
	}
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your RAM is not appropriate";
		return false;
		}
	}
	bool processor()
	{
	cout<<endl<<"Enter the kind of processor you need:";
	cin>>input_processor;
	select_processor="i3 - i5";
	if(select_processor.compare(0,2,input_processor)==0 || select_processor.compare(5,2,input_processor)==0 )
	{
		return true;
		
	}
		else 
		{
			
		cout<<endl<<"You cannot buy this laptop because of your processor is not appropriate";	
		return false;
		}
	}
	bool graphics()
	{
	cout<<endl<<"Enter the kind of graphics you need:";
	cin>>input_graphics;
	select_graphics="intelhd - amd rayzen";
	if(select_graphics.compare(0,7,input_graphics)==0 ||  select_graphics.compare(10,10,input_graphics)==0 || select_graphics.compare(0,5,input_graphics)==0 )
	
	{
		cout<<endl<<"You can purchase this laptop";
	return true;
	}
		
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your graphic is not appropriate";	
		return false;
		}
	}
	 
};



class hp_gaming_laptop:public hp_office_laptop
{
	
	double input_price;
	string select_ram,input_ram;
	string select_processor,input_processor;
	string select_graphics,input_graphics;
	public:
bool price()
	{

	cout<<endl<<"Enter your budget:";
	cin>>input_price;
	if(input_price>=50000)
	{
			return true;
	}
	else
	{
		cout<<endl<<"You cannot buy this laptop because of your budget is insufficient";
	return false;
	}
		
	}
	bool ram()
	{
	cout<<endl<<"Enter the amount of RAM you want in your laptop:";
	cin>>input_ram;
	select_ram="8GB - 12GB";
	if(select_ram.compare(0,3,input_ram)==0 || select_ram.compare(6,4,input_ram)==0)
	{
		
		return true;
	}
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your RAM is not appropriate";
		return false;
		}
	}
	bool processor()
	{
	cout<<endl<<"Enter the kind of processor you need:";
	cin>>input_processor;
	 select_processor="i5 - i7";
	if(select_processor.compare(0,2,input_processor)==0 ||  select_processor.compare(5,2,input_processor)==0 )
	{
		
		return true;
	}
		else 
		{
			
		cout<<endl<<"You cannot buy this laptop because of your processor is not appropriate";	
		return false;
		}
	}
	bool graphics()
	{
	cout<<endl<<"Enter the kind of graphics you need:";
	cin>>input_graphics;
	select_graphics="nvidia720";
	if(select_graphics.compare(0,9,input_graphics)==0 || select_graphics.compare(0,6,input_graphics)==0 )
	
	{
		cout<<endl<<"You can purchase this laptop";
	return true;
	}
		
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your graphic is not appropriate";	
		return false;
		}
	}
	
	
};


class hp_high_end_gaming_laptop:public hp_gaming_laptop
{

double input_price;
string select_ram,input_ram;
	string select_processor,input_processor;
	string select_graphics,input_graphics;
	public:
bool price()

	{
	cout<<endl<<"Enter your budget:";
	cin>>input_price;
	if(input_price>=80000)
	{
	return true;		
	}
	else
	{
		cout<<endl<<"You cannot buy this laptop because of your budget is insufficient";
	return false;
	}
		
	}
	bool ram()
	{
	cout<<endl<<"Enter the amount of RAM you want in your laptop:";
	cin>>input_ram;
	select_ram="8GB - 16GB";
	if(select_ram.compare(0,3,input_ram)==0 || select_ram.compare(6,4,input_ram)==0 || input_ram.compare("12GB")==0)
	{
		return true;
		
	}
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your RAM is not appropriate";
		return false;
		}
	}
	bool processor()
	{
	cout<<endl<<"Enter the kind of processor you need:";
	cin>>input_processor;
	select_processor="i7";
	if(select_processor.compare(0,2,input_processor)==0 )
	{
		return true;
		
	}
		else 
		{
			
		cout<<endl<<"You cannot buy this laptop because of your processor is not appropriate";	
		return false;
		}
	}
	bool graphics()
	{
	cout<<endl<<"Enter the kind of graphics you need:";
	cin>>input_graphics;
	select_graphics="nvidia nitrogen";
	if(select_graphics.compare(0,6,input_graphics)==0 || select_graphics.compare(0,15,input_graphics)==0 )
	
	{
		cout<<endl<<"You can purchase this laptop";
	   return true;
	}
		
		else
		{
			cout<<endl<<"You cannot buy this laptop because of your graphic is not appropriate";	
		return false;
		}
	}

 
};

int take_input()
{
	string take;
	cout<<endl<<"If you want to check another laptop detail then enter yes otherwise  enter no:";
	cin>>take;
	if(take.compare("yes")==0)
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
string *choice=new string;
int m=1,n=1;

bool return_value;

while(m==n)
{
	cout<<endl<<"Enter which kind of HP laptop type you want to purchase that are listed below:"<<endl<<"Simple laptop"<<endl<<"Office laptop";
	cout<<endl<<"Gaming laptop"<<endl<<"High end gaming laptop"<<endl<<endl<<"Your choice=";
	getline(cin,*choice);
	if(choice->compare("simple laptop")==0)
	{
		
		hp_simple_laptop check[n];
		ofstream hp_output;
		hp_output.open("hp_laptop.txt",ios::app);
		return_value=check[n-1].price();
		if(return_value == true)
		{return_value=check[n-1].ram();}
		if(return_value == true)
		{return_value=check[n-1].processor();}
		if(return_value == true)
		{return_value=check[n-1].graphics();}
		
		if(return_value == false)
		{
			cout<<endl<<"Item not found";
		}

		hp_output.write((char*)&check,sizeof(check));
		hp_output.close();

		ifstream hp_input;
		hp_input.open("hp_laptop.txt");
		char value;
		value=hp_input.get();
		while(!hp_input.eof())
		{
			cout<<value;
			value=hp_input.get();
		}
hp_input.close();
	}
	else if(choice->compare("office laptop")==0)
	{
		
		hp_office_laptop check[n];
		return_value=check[n-1].price();
		if(return_value == true)
		{return_value=check[n-1].ram();}
		if(return_value == true)
		{return_value=check[n-1].processor();}
		if(return_value == true)
		{return_value=check[n-1].graphics();}
		if(return_value == false)
		{
			cout<<endl<<"Item not found";
		}
	}
	else if(choice->compare("gaming laptop")==0)	
	{
		hp_gaming_laptop check[n];
		return_value=check[n-1].price();
		if(return_value == true)
		{return_value=check[n-1].ram();}
		if(return_value == true)
		{return_value=check[n-1].processor();}
		if(return_value == true)
		{return_value=check[n-1].graphics();}
		if(return_value == false)
		{
			cout<<endl<<"Item not found";
		}
		
	}
	else if(choice->compare("high end gaming laptop")==0)
	{
		
		hp_high_end_gaming_laptop check[n];
		return_value=check[n-1].price();
		if(return_value == true)
		{return_value=check[n-1].ram();}
		if(return_value == true)
		{return_value=check[n-1].processor();}
		if(return_value == true)
		{return_value=check[n-1].graphics();}
		if(return_value == false)
		{
			cout<<endl<<"Item not found";
		}
	}
	else 
	{
		cout<<endl<<"You entered a wrong HP laptop type this is not available";
	}

int value=take_input();
if(value==1)
{
	n=n+1;
	m=n;
}
else
{
	n=n-1;
}
cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
	return 0;
	
}