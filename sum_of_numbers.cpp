/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans = 0;
    cin>>a;
    while(a>0){
        int rem = a%10; //reminder
        ans = ans + rem;
        a = a / 10; //Quotent
    }
    
    cout<<ans<<endl;
    
    return 0;
}
