/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0; //You can make it abstract by making it virtual
    
};


class Employee:AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;
public:
    
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    
    void setComapny(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    
    void setAge(int age){
        if (age >= 18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<std::endl;
        cout<<"Company - "<<Company<<std::endl;
        cout<<"Age - "<<Age<<std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
    void AskForPromotion(){
        if(Age>30){
            cout<<Name<<" Got Promoted "<<endl;    
        }
        else{
            cout<<Name<<" sorry NO PRomotion "<<endl;
        }
    };
    
    
};

int main()
{
    int number;
    Employee employee1 = Employee("SHivu","BOCH GER",38); //Here a constructor is invoked
    //employee1.IntroduceYourself();
     
    Employee employee2 = Employee("Kumar","Amazon",22);
    //employee2.IntroduceYourself();
    
    /*employee1.setName("Shivakumar ");
    employee1.setComapny(" Apple ");
    employee1.setAge(20);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" working in "<<employee1.getCompany()<<endl; */ 
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}




