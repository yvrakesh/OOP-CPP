#include<iostream>
using namespace std;
class Employee{
    public:
        string Name,Company;
        int Age;
        void Introduce(){
            cout<<"Hello Guys, I am "<<Name<<endl;
            cout<<"I am working in "<<Company<<endl;
            cout<<"I'm "<<Age<<" years old"<<endl;
        }
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
            Introduce();
        }
};

int main(){
    Employee emp1 = Employee("Yacha Venkata Rakesh","Deutsche Bank of India",20);
    Employee emp2 = Employee("Y V Sai Hitesh","Amazon India",23);
    return 0;
}