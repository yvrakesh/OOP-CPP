// Advantage of Setters is user though can change their name, In the Setter method we can restrict to some constraints.
#include<iostream>
using namespace std;
class Employee{
private:
    string Name,Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    } // Setters
    string getName(){
        return Name;
    } // Getters
    void setCompany(string company){
        Company = company;
    } // Setters
    string getCompany(){
        return Company;
    } // Getters
    void SetAge(int age){
        Age = age;
    } // Setters 
    int getAge(){
        return Age;
    } // Getters
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