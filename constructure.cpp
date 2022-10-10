/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;
    
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<std::endl;
        cout<<"Company - "<<Company<<std::endl;
        cout<<"Age - "<<Age<<std::endl;
    }
    Employee(string name, string company, int age){      //Here we created Constructure  by ourselves
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    int number;
    Employee employee1 = Employee("SHivu","BOCH GER",22); //Here a constructor is invoked
    employee1.IntroduceYourself();
     
    Employee employee2 = Employee("Kumar","Amazon",22);
    employee2.IntroduceYourself();
}
