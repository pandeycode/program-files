#include<iostream>
#include<string>
#include<limits>
using namespace std;
struct team
{
	string player_name;
	int jersy_no;
	string profession;
}team1[11],team2[11];

team team_input(team );
void team_output(team);
int main()
{
	string team1_name,team2_name;
	team teamx;
	int i,j;
	
	for(i=1;i<=2;i++)
	{
		if(i==1)
		{
		cout<<"------------------------------------------------------"<<endl;
		cout<<"ENTER THE NAME OF "<<i<<"TEAM"<<endl;
		cout<<"------------------------------------------------------"<<endl;
			getline(cin,team1_name);
			for(j=1;j<=11;j++)
			{
			cout<<"ENTER THE DETAILS OF "<<j<<" PLAYER OF "<<"TEAM "<<team1_name;
				team1[j]=team_input(teamx);
				
			}
			cout<<"------------------------------------------------------"<<endl;
		}
		else
		{
		cout<<"------------------------------------------------------"<<endl;
		cout<<"ENTER THE NAME OF "<<i<<"TEAM"<<endl;
		cout<<"------------------------------------------------------"<<endl;
			getline(cin,team2_name);
			for(j=1;j<=11;j++)
			{
			cout<<"ENTER THE DETAILS OF "<<j<<" PLAYER OF "<<"TEAM "<<team2_name;
				team2[j]=team_input(teamx);
				
			}
			cout<<"------------------------------------------------------"<<endl;
		}
		
	}
	
	
	for(j=1;j<=2;j++)
	{
		if(j==1)
		{
			cout<<"------------------------------- LIST OF PLAYING 11 OF TEAM "<<team1_name<<" -------------------------------"<<endl;
			cout<<"------------------------------------------------------"<<endl;
			cout<<" JERSY NUMBER \t PLAYER NAME \t PROFESSION "<<endl;
			cout<<"------------------------------------------------------"<<endl;
			 for(i=1;i<=11;i++)
			 {
			 	
				team_output(team1[i]);
				
			 }
			 
			 }
			 else
			 {
			 cout<<"------------------------------- LIST OF PLAYING 11 OF TEAM "<<team2_name<<" -------------------------------"<<endl;
			cout<<"------------------------------------------------------"<<endl;
			cout<<" JERSY NUMBER \t PLAYER NAME \t PROFESSION "<<endl;
			cout<<"------------------------------------------------------"<<endl;
			 for(i=1;i<=11;i++)
			 {
			 	
				team_output(team2[i]);
				
			 }
			 
			 	
			 }
			
			
		}
		
	
return 0;
}

team team_input(team value)
{

cout<<endl<<"1. PLAYER NAME=";
	getline(cin,value.player_name);
	cout<<"2. PROFESSION=";
	getline(cin,value.profession);
	cout<<"3. JERSY NO=";
	cin>>value.jersy_no;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	return value;
}

void team_output(team output)
{
	cout<<"\t "<<output.jersy_no<<" \t "<<output.player_name<<" \t "<<output.profession<<endl;
	
}