#include<iostream>
using namespace std;
class college:
{
public:
bool choice;
bool choice()
{
	cout<<endl<<"	IF YOU WANT TO DO COLLEGE TYPE (YES) AND IF YOU NOT WANTED TO DO COLLEGE TYPE (NO)"<<endl<<"		YOUR INPUT=";
	cin>>choice
	return choice;
}
	
	
};


class graduation:
{
public:
int input2;
void science_with_math_graduation()
{
string subject="mathematics";
	cout<<endl<<"IF YOU WANT TO DO GRADUTION IN TECHNICAL FIELD THEN PRESS 1 IN INPUT 	OR		PRESS 2 FOR GRADUATION IN NON TECHNICAL FIELD"<<endl;
		cout<<"INPUT=";
		cin>>input2;
		if(input2==1)
		{
	   technical_graduation();
			
		}
		else if(input2==2)
		{
			non-technical_graduation(subject);
		}
		else
		{
			cout<<endl<<"ENTERED WRONG FIELD"<<endl;
		}
}


	
};


class post_graduation:
{
	
	public:
	int input2;
	void science_with_math_post_graduation()
	{
	string subject="mathematics";
					cout<<endl<<"IF YOU WANT TO DO POST GRADUTION IN TECHNICAL FIELD THEN PRESS 1 IN INPUT		OR		 PRESS 2 FOR POST GRADUATION IN NON TECHNICAL FIELD"<<endl;
		cout<<"INPUT=";
		cin>>input2;
		if(input2==1)
		{
			technical_post_graduation();
		}
		else if(input2==2)
		{
			non-technical_post_graduation(subject);
		}
		else
		{
			cout<<endl<<"ENTERED WRONG FIELD"<<endl;
		}
	}
};


class technical:
{
	public:
void technical_graduation()
{
	
	
}

void technical_post_graduation()
{
	
	
}

};


class non_technical:
{
public:
void non-technical_graduation(string subject1)
{
	
	
}

void non-technical_post_graduation(string subject2)
{
	
	
}

	
};


class doctrat:
{
	
	
};


class phd:
{
	

};


class other_degrees:
{
	public:
	science_other_degree(string subject)
	{
		
		
	}
};


class science_background:
{
public:
int science_subject;
int input1,input2,input3,input4;
	string subject="biology";
		string subject1="mathematics";
void science_subject()
{
	cout<<endl<<"		ENTER THE CORRECT NUMBER ACCORDING TO YOUR SUBJECTS THAT YOU HAVE IN CLASS 12TH  "<<endl;
	cout<<endl<<"1.PHYSICS,CHEMISTRY,MATHEMATICS(PCM)"<<endl<<"2.PHYSICS,CHEMISTRY,BIOLOGY(PCB)"<<endl<<"3.PHYSICS,CHEMISTRY,MATHEMATICS,BIOLOGY(PCMB)"<<endl;
	cout<<endl<<"YOUR SUBJECT=";
	cin>>subject;
	switch(science_subject)
	{
		case 1:
		cout<<endl<<"ENTER 1 FOR GRADUATION 		OR 		ENTER 2 FOR POST GRADUTION 		OR		ENTER 3 FOR OTHER DEGREE"<<endl<<"INPUT=";
		cin>>input1;
		if(input1==1)
		{
		science_with_math_graduation();
		}
		else if(input1==2)
		{
      science_with_math_post_graduation();
		}
		else if(input1==3)
		{
	
		science_other_degree(subject1);
		}
		
		break;
		case 2:
		cout<<endl<<"ENTER 1 FOR GRADUATION		OR		ENTER 2 FOR DOCTRAT		OR		ENTER 3 FOR OTHER DEGREE		OR		ENTER 4 FOR POST GRADUTION"<<endl<<"	INPUT=";
		cin>>input4;
		if(input4==1)
		{
	
		non-technical_graduation(subject);	
	
		}
		else if(input4==2)
		{
			science_doctrat();
		}		
		else if(input4==3)
		{
			science_other_degree(subject);
		}
		else if(input4==4)
		{
		non-technical_post_graduation(subject);	
		}
		else
		{
			cout<<endl<<"YOUR CHOICE IS INCORRECT"<<endl;
		}
		
		break;
		case 3:
		cout<<endl<<"WHICH FIELD DO YOU ARE GOING TO FOCUS "<<"		1.MATHEMATICS"<<endl<<"		2.BIOLOGY"<<endl<<endl<<"INPUT=";
		cin>>input2;
		if(input2==1)
		{
				cout<<endl<<"ENTER 1 FOR GRADUATION 		OR 		ENTER 2 FOR POST GRADUTION 		OR		ENTER 3 FOR OTHER DEGREE"<<endl<<"INPUT=";
		cin>>input3;
		if(input3==1)
		{
		science_with_math_graduation();
		}
		else if(input3==2)
		{
      science_with_math_post_graduation();
		}
		else if(input3==3)
		{
		science_with_math_other_degree();
		}
		}
		else if(input2==2)
		{
					cout<<endl<<"ENTER 1 FOR GRADUATION		OR		ENTER 2 FOR DOCTRAT		OR		ENTER 3 FOR OTHER DEGREE		OR		ENTER 4 FOR POST GRADUTION"<<endl<<"	INPUT=";
		cin>>input4;
		if(input4==1)
		{
	
		non-technical_graduation(subject);	
	
		}
		else if(input4==2)
		{
			science_doctrat();
		}		
		else if(input4==3)
		{
			science_other_degree(subject);
		}
		else if(input4==4)
		{
		non-technical_post_graduation(subject);	
		}
		else
		{
			cout<<endl<<"YOUR CHOICE IS INCORRECT"<<endl;
		}
		}
		else
		{
			cout<<endl<<"YOUR FIELD IS NOT VALID"<<endl;
		}
		
		break;
		default:
		cout<<endl<<"YOUR SUBJECT CHOICE IS WRONG "<<endl;
		
	}
}
	
};


class commerce_background:
{
public:
int commerce_subject;
void commerce_subject()
	{
	cout<<endl<<"		ENTER THE CORRECT NUMBER ACCORDING TO YOUR SUBJECTS THAT YOU HAVE IN CLASS 12TH  "<<endl;
	cout<<endl<<"1.ECONOMICS,ACCOUNT,BUSSINESS,MATHEMATICS"<<endl<<"2.ECONOMICS,ACCOUNT,BUSSINESS,IP"<<endl<<"3.ECONOMICS,ACCOUNT,BUSSINESS,HINDI"<<endl;
	cout<<endl<<"YOUR SUBJECT=";
	cin>>subject;
	switch(science_subject)
	{
		case 1:
		
		break;
		case 2:
		
		break;
		case 3:
		
		break;
		default:
		cout<<endl<<"YOUR SUBJECT CHOICE IS WRONG "<<endl;
		
	}
	
};


class art_background:
{
	
	
};


class input:public college,public science_background,public commerce_background,public art_background
{
public:
int stream;
void input_choice()
{
cout<<endl<<"ENTER THE CORRECT NUMBER ACCORDING TO YOUR STREAM IN CLASS 12"<<endl;
cout<<"		1.SCIENCE STREAM"<<endl<<"		2.COMMERCE STREAM"<<endl<<"		3.ART STREAM"<<endl<<endl<<"YOUR STREAM=";
cin>>stream;
switch(stream)
{
	case 1:
	science_subject();
	break;
	case 2:
	commerce_subject();
	break;
	case 3:
	art_subject();
	break;
	default:
	cout<<endl<<"YOU HAVE NOT ENTERED A VALID STREAM TRY AGAIN"<<endl;
}
	
}	
};


int main()
{
	input object;
	bool value;
	bool choice=yes;
	while(choice==yes)
	{
	   value=object.choice();
		if(value==yes)
		{
		object.input_choice();
		
		}
	}
	return 0;
}