#include<iostream>
#include<string>
using namespace std;
struct team
{

	int jersy_no;
	char player_name[35];
   char profession[35];
	
	
}team1[11],team2[11];

int main()
{
 char team_name[2][50];
int i,j;
for(j=1;j<=2;j++)
{
cout<<"ENTER THE NAME OF "<<j<<"TEAM"<<endl;
	cin.getline(team_name,25);
for(i=1;i<=11;i++)
{
	if(j==1)
	{
	cout<<"ENTER JERSY NUMBER OF "<<i<<"PLAYER OF TEAM "<<team_name[j]<<endl;
		cin>>team1[i].jersy_no;
		cout<<"ENTER THE NAME OF "<<i<<"PLAYER OF TEAM" <<team_name[j]<<endl;
		cin.getline(team1[i].player_name,25);
	}
	else
	{
	cout<<"ENTER JERSY NUMBER OF "<<i<<"PLAYER OF TEAM "<<team_name[j]<<endl;
		cin>>team2[i].jersy_no;
		cout<<"ENTER THE NAME OF "<<i<<"PLAYER OF TEAM "<<team_name[j]<<endl;
		cin.getline(team2[i].player_name,25);
		
		}
		
		if(i<6)
		{
			team1[i].profession.assign("BATSMAN");
				
		}
		else if(i>6 && i<9)
		{
		team1[i].profession.assign("ALL ROUNDER");
			
		}
		else
		{
			team1[i].profession.assign("BOWLER");
		}
	
	
}	}


cout<<"--------------------------------------------------------------------------------"<<endl<<endl;
for(j=1;j<=2;j++)
{
cout<<"\t\tTHE LIST OF TEAMS WITH THIER PLAYING 11 "<<endl<<"\t TEAM NAME :- "<<team_name[j];
cout<<endl<<"\t JERSY NO \t PLAYER NAME \t PROFESSION "<<endl;
cout<<"-----------------------------------------------------------------------------------------"<<endl;
for(i=1;i<11;i++)
{
if(j==1)
{
	cout<<team1[i].jersy_no<<"\t"<<team1[i].player_name<<"\t"<<team1[i].profession<<endl;
	
}
else
{
cout<<team2[i].jersy_no<<"\t"<<team2[i].player_name<<"\t"<<team2[i].profession<<endl;
}
}}
cout<<"------------------------------------------------------------------------------------";

return 0;
}