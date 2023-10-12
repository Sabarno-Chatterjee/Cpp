/*Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.*/

#include<iostream>

using namespace std;

class Person{
    //data members
    private:
    string name;
    int age;
    string country;

    public:
    Person(string name="abc", int age=0, string country="xyz");

    //Accessor methods
    string getName(){return name;}
    int getAge(){return age;}
    string getCountry(){return country;}

    //Mutator methods
    void setName(string name);
    void setAge(int age);
    void setCountry(string country);

};

Person::Person(string name, int age, string country){
    this->name=name;
    this->age=age;
    this->country=country;
}

void Person::setName(string name){
    this->name=name;
}

void Person::setAge(int age){
    this->age=age;
}

void Person::setCountry(string country){
    this->country=country;
}

int main(){

    return 0;
}