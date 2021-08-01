#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    string Name, Company;
    int Age;
public:
    void setName(string name){
        int n = name.length();
        while(n--){
            if(name[n] >= '1' && name[n] <= '9')
                return;
        }
        Name = name;
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void introduce(){
        cout<<"Hello Guys, I am "<<Name<<endl;
        cout<<"I am from "<<Company<<endl;
        cout<<"My Age is "<<Age<<" years"<<endl;
    }
    void AskForPromotion(){
        if(Age >= 22)
            cout<<Name<<" , Congratulations, You are Promoted"<<endl;
        else
            cout<<"Sorry "<<Name<<" , Your Promotion can't be proceeded further"<<endl;
    }
    Employee(string name, string company,int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main(){
    Employee emp1 = Employee("Yacha Venkata Rakesh","Deutsche Bank of India",23);
    Employee emp2 = Employee("Y V Sai Hitesh", "Amazon India",21);

    emp1.AskForPromotion();
    emp2.AskForPromotion();

    return 0;
}