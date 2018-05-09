#include<iostream>
using namespace std;

class computer_science
{
    public:
  virtual void programming()
   {
       cout<<"various programming language"<<endl;
   
   }
  virtual void operating_system()
   {
       cout<<endl<<"Has to study operating system"<<endl;

   }

    void hardware()
   {
       cout<<endl<<"Has to study hardware"<<endl;
   }
 void software()
   {
       cout<<endl<<"Has to study software"<<endl;
   }
};

class btech:public computer_science
{
    public:
   void programming()
   {
       cout<<"various programming language"<<endl;
       cout<<endl<<"c,c++,html,css,java,data structure"<<endl;
   
   }
   void operating_system()
   {
       cout<<endl<<"Has to study operating system"<<endl;
cout<<endl<<"linux,unix,ubuntu,macintosh,windows"<<endl;
   }

   void hardware()
   {
       cout<<endl<<"Has to study hardware"<<endl;
       cout<<endl<<"computer architecture"<<endl;
   }
   void software()
   {
       cout<<endl<<"Has to study software"<<endl;
       cout<<"java,c++,anderoid"<<endl;

   }
   
   void basic_science()
   {
       cout<<endl<<"Has to study basic science"<<endl;
       cout<<endl<<"physics,chemistry,mathematics and logics with basic learning"<<endl;
   }
};

class bca:public btech
{
 
  public:
   void programming()
   {
       cout<<"various programming language"<<endl;
       cout<<endl<<"c,c++,java,html,php"<<endl;
   
   }
   void operating_system()
   {
       cout<<endl<<"Has to study operating system"<<endl;
       cout<<endl<<"windows,linux"<<endl;

   }
   void software()
   {
       cout<<endl<<"Has to study software"<<endl;
   }
};

class bsc:public computer_science
{
   void programming()
   {
       cout<<"various programming language"<<endl;
       cout<<endl<<"html,c,c++"<<endl;
   
   }
    void software()
   {
       cout<<endl<<"Has to study software"<<endl;
       cout<<endl<<"c++"<<endl;
   }

};

int main()
{
computer_science *object1;
btech object2,*pointer;
bca object3;
bsc object4;
object1=&object2;
object1->programming();
object1->operating_system();
pointer=&object3;
pointer->programming();

return 0;

}