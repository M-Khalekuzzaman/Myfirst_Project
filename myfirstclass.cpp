/*
#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass::MyFirstClass()
{
    cout<<"Inside the contructor "<<endl;
}
void MyFirstClass ::display()
{
    cout<<"Inside the display method"<<endl;
}

*/
#include "myfirstclass.h"
#include<iostream>
using namespace std;
MyFirstClass ::MyFirstClass()
{
    cout<<"Constructor is called"<<endl;
}
MyFirstClass :: ~MyFirstClass()
{
      cout<<"Destructor  is called"<<endl;
}
void MyFirstClass :: display1()
{
    cout<<"Display(1) is called"<<endl;
}
void MyFirstClass :: display2()
{
    cout<<"Display(2) is called"<<endl;
}


