/*
//Class using constructor
#include <iostream>
#include "myfirstclass.h"

using namespace std;

int main()
{
    MyFirstClass ob1;
    ob1.display();
    return 0;
}

*/
#include <iostream>
#include "myfirstclass.h"

using namespace std;

int main()
{
    MyFirstClass ob1;
    ob1.display1();
    MyFirstClass *p = &ob1;   // This is  Selection operators
    p ->display2();

    return 0;
}
