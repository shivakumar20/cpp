/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a * factorial(a-1);
    
}

int main()
{
    int a;
    cin>>a;
    cout<<" Output is : "<<factorial(a);
    return 0;
}
