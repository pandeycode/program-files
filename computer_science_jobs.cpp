#include<iostream>
#include<string>
#include<limits>
using namespace std;

template<class type>

class computer_science_job
{
public:


type check_degree()
{
cout<<endl<<"Enter your degree that you have done in your graduation:";
type degree_input;
cin>>degree_input;

if(degree_input.compare("btech")==0)
{
return degree_input;

}
else
if(degree_input.compare("bca")==0)
{
return degree_input;

}
else
if(degree_input.compare("bsc")==0)
{
return degree_input;

}
else{
cout<<endl<<"Job not available according to your degree"<<endl;

}
}

type field(type temp)
{
    type field_input;

    if(temp.compare("btech")==0)
{

cout<<endl<<"Enter the field that you are going to apply with:";
cout<<endl<<"software"<<endl;
cout<<"hardware"<<endl;
cout<<endl<<"your input:";

cin>>field_input;
if(field_input.compare("software")==0)
{
return field_input;
}
else if(field_input.compare("hardware")==0)
{
    return field_input;
}
else{

    cout<<endl<<"your are not eligible for the job because of your field"<<endl;
}
}
else
if(temp.compare("bca")==0)
{
return field_input="software";

}
else
if(temp.compare("bsc")==0)
{

return field_input="software";

}

}

type domain(type temp)
{
if(temp.compare("software")==0)
{
cout<<endl<<"Enter your domain that you want to apply from the given domain"<<endl;
cout<<endl<<"anderoid development"<<endl<<"web app development"<<endl<<"game development"<<endl;
cout<<"website development"<<endl<<"data science"<<endl<<"machine learning"<<endl;
cout<<"application development"<<endl<<"your domain:";
type domain_input;
getline(cin,domain_input);
cin.ignore(numeric_limits<streamsize>::max(),'\n');
type domain_check="anderoid development, web app development, game development, website development,data science,machine learning ,application development";
if(domain_check.find(domain_input)!=string::npos)
{

    return domain_input;
}
else
{
    cout<<endl<<"no jobs are available for that domain"<<endl;
}

}
else
{
cout<<endl<<"Enter your domain that you want to apply from the given domain"<<endl;
cout<<"memory designing"<<endl<<"processor design"<<endl<<"ram design"<<endl<<"micro processor"<<endl<<"graphic card";
cout<<endl<<"hard disk design"<<endl<<"ssd design"<<endl<<"display"<<endl;
type domain_input;
getline(cin,domain_input);
cin.ignore(numeric_limits<streamsize>::max(),'\n');
type domain_check="memory designing,processor design ,ram design ,micro processor ,graphic card, hard disk design ,ssd design display ";
if(domain_check.find(domain_input)!=string::npos)
{
return domain_input;
}
else
{
    cout<<endl<<"no jobs are available for this domain"<<endl;
}
}
}

type qualification(type temp1,type temp2)
{
    cout<<"Enter your qualification:";
type qualification;
cin>>qualification;
cin.ignore(numeric_limits<streamsize>::max(),'\n');


if(temp2.compare("software")==0)
{
if(temp1.compare("anderoid development")==0  || temp1.compare("application development")==0)
{

type default_value="java,kotlin,swift,java script";
if(default_value.find(qualification)!=string::npos)
{
    cout<<"you can get job in application development here"<<endl;
    return "application developer";
}
else{
    cout<<endl<<"you cannot get job here"<<endl;
}
}
else if(temp1.compare("website development")==0  || temp1.compare("web app development")==0)
{
   type default_value="html,css,java script,php";
      if(default_value.find(qualification)!=string::npos && qualification.compare("html")==0 &&  qualification.compare("php")==0)
      {
          cout<<"you can get job in web development here"<<endl;
    return "web developer";
      }
      else{
          cout<<endl<<"you cannot get job here"<<endl;
      }


}
else if(temp1.compare("game development")==0)
{
 type default_value="c,c++,c#,java";
 if(default_value.find(qualification)!=string::npos &&  qualification.compare("c#")==0 &&  qualification.compare("java")==0)
{
cout<<"you can get job in game development here"<<endl;
    return "game developer";

}
else{
     cout<<endl<<"you cannot get job here"<<endl;
}
}
else if(temp1.compare("machine learning ")==0 || temp1.compare("data science")==0)
{
type default_value="python,.net";
if(default_value.find(qualification)!=string::npos )
{
   cout<<"you can get job in data science here"<<endl;
    return "data scientist"; 
}
else{
   cout<<endl<<"you cannot get job here"<<endl; 
}
}


}
else
{
type default_value="computer architecture operating system,basics electronics,hardware design";
if(default_value.find(qualification)!=string::npos)
{
    cout<<endl<<"you can get job here"<<endl;
}
else 
{
    cout<<endl<<"you cannot get job here"<<endl;
}

}


}

type experience(type temp)
{
    cout<<endl<<"enter your experience in years as"<<temp<<":";
    type experience_input;
    cin>>experience_input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

return experience_input;

}

type designation(type temp1,type temp2)
{
if(temp2.compare("software")==0)
{
    if(temp1.compare("3year")==0 || temp1.compare("4year")==0 || temp1.compare("+5year"))
    {
        return "developer";
    }

else 
{
    return "tester";
}
}
else 
{
   if(temp1.compare("3year")==0 || temp1.compare("4year")==0 || temp1.compare("+5year"))
    {
        return "senior designer";
    } 
    else{

        return "juniour designer";

    }
}}


type salary(type temp1,type temp2)
{
    if(temp1.compare("developer")==0)
    {
        if(temp2.compare("3year")==0)
        {
cout<<endl<<"salary:45k - 75k ";
        }
        else 
         if(temp2.compare("4year")==0)
        {
cout<<endl<<"salary:80k - 120k ";
        }
        else{
            cout<<endl<<"salary:200k - 500k ";
        }
    }
else

if(temp1.compare("tester")==0)
    {
        if(temp2.compare("1year")==0 || temp2.compare("2year")==0)
        {
           cout<<endl<<"salary:30k - 40k "; 
        }
        else{
                 cout<<endl<<"salary:15k - 25k";
        }
    }
    else  if(temp1.compare("senior designer")==0)
{
   cout<<endl<<"salary:60k - 125k"; 
}
else
{
    
    cout<<endl<<"salary:20k - 55k"; 
}
}

};



string job_check()
{
    cout<<endl<<"Enter yes if you wanted to get the job in computer science field rather than enter no:";
    string input_choice;
    cin>>input_choice;
return input_choice;
}
int main()
{

string return_choice_value=job_check();

if(return_choice_value.compare("yes")==0)
{

computer_science_job<string> check_input;
string output_degree=check_input.check_degree();

string output_field=check_input.field(output_degree);
string output_domain=check_input.domain(output_field);
string output_qualification=check_input.qualification(output_domain,output_field);
string output_experience=check_input.experience(output_qualification);
string output_designation=check_input.designation(output_experience,output_field);
check_input.salary(output_designation,output_experience);

}
else{

}

}