/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a; //decleration
    a = 12;//initialisation

    cout<<"size if int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;
    
    short int si;
    long int li;
    
    cout<<"size of short int "<<sizeof(si)<<endl;
    cout<<"size of long int "<<sizeof(li)<<endl;

    return 0;
}
