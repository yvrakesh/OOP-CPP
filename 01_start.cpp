#include<iostream>
using namespace std;
class Employee{
    public:
        string Name, Company;
        int Age;
        void introduction(){
            cout<<"Hey Guys, I am "<<Name<<endl;
            cout<<"I am glad joining "<<Company<<endl;
            cout<<"I'm "<<Age<<" years old"<<endl;
        }
};
int main(){
    Employee emp1;
    emp1.Name = "Yacha Venkata Rakesh";
    emp1.Company = "Deutsche Bank";
    emp1.Age = 21;
    emp1.introduction();

    Employee emp2;
    emp2.Name = "Y V Sai Hitesh";
    emp2.Company = "Amazon";
    emp2.Age = 23;
    emp2.introduction();
    return 0;
}