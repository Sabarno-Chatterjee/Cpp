/*Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.*/

#include<iostream>
#include<cstring>

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

    friend ostream & operator<<(ostream &out, Person &p);

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

ostream & operator<<(ostream &out, Person &p){
    out<<"Name: "<<p.name<<endl;
    out<<"Age: "<<p.age<<endl;
    out<<"Country: "<<p.country<<endl;

    return out;
}

int main(){
    Person p("Hamilton", 38, "Monaco");
    cout<<p;
    return 0;
}