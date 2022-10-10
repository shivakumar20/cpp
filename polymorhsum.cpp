/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//--------------The most common use of polymorphism is when 
//--------------a parent class reference is used to refer a child class 

#include <iostream>

using namespace std;
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0; //You can implement by making it  make it abstract by making it virtual
    
};


class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
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
    Employee(string name, string company, int age){   //Here we created Constructure  by ourselves
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
    virtual void Work(){
        std::cout<<Name<<" Is checking E-mail, task backlog, performing tasks ..."<<endl;
    }
};



class Developer:public Employee{           //Here Developer is child class and Employee is parent class
public:
    string FavProgrammmingLanguage;
    Developer(string name, string company, int age,string favProgrammmingLanguage)
    :Employee(name , company, age) //Now the constructure attributs name,company, age of base class Employee will get by constructure of dervied class Developer
    {
    FavProgrammmingLanguage = favProgrammmingLanguage;
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<< FavProgrammmingLanguage<<endl; //Here we are changing getName() to Name by making Name variable in Employee class protected
    }
    void Work(){
        std::cout<<Name<<" is writing "<<FavProgrammmingLanguage<<" code "<<endl;
    }
    
};

class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson()
    {
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company,age)
        {
            Subject = subject;
        }
    void Work(){
        std::cout<<Name<<" is teaching "<<Subject<<endl;
    }
    
};

int main()
{
    //int number;
    //Employee employee1 = Employee("SHivu","BOCH GER",38); //Here a constructor is invoked
    //employee1.IntroduceYourself();
     
    Employee employee2 = Employee("Kumar","Amazon",22);
    //employee2.IntroduceYourself();
    
    /*employee1.setName("Shivakumar ");
    employee1.setComapny(" Apple ");
    employee1.setAge(20);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" working in "<<employee1.getCompany()<<endl; */ 
    
    /*employee1.AskForPromotion();
    employee2.AskForPromotion();*/
    
    Developer d = Developer("Shivakumar V H","Pied piper",34,"C++");
    //d.FixBug();
    //d.AskForPromotion(); //AskForPromotion method is accessable when the inheritance is made public because by default everything will be private
    Teacher t = Teacher("Sham","Cool school",35,"history");
    //t.PrepareLesson();
    
    //d.Work();
    //t.Work();
    
    Employee* e1 = &d;
    Employee* e2 = &t;
    
    e1->Work();
    e2->Work();
    
}




