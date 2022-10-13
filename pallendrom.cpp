/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int c = a;
    float rev = 0;
    while(a>0){
        int rem = a %10;
        cout<<rem<<endl;
        rev  = (rev * 10) + rem;
        a = a / 10;
    }
    
    if(rev == c) cout<<"Pallendrom"<<endl;
    else cout<<"Not Pallendrom"<<endl;

    return 0;
}
