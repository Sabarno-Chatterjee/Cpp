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
};

Person::Person(string name, int age, string country){
    this->name=name;
    this->age=age;
    this->country=country;
}

int main(){

    return 0;
}