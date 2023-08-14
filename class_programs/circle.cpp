#include<iostream>
#include<stdio.h>

using namespace std;

#define PI 3.14

class Circle{
    //data_members
    private:
    float radius;

    public:
    //default constructor
    Circle(){                   
        radius=0;
    }

    //parameterized constructor
    Circle(float r){
        radius = r;
    }

    float area(){
        return PI*radius*radius;
    }

    float circumference(){
        return 2*PI*radius;
    }

    //Mutator methods
    void setRadius(float r){
        radius = r;
    }

    //Accessor methods
    float getRadius(){
        return radius;
    }

    //destructor
    ~Circle(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Circle c(4.9);

    cout<<"Area: "<<c.area()<<endl;
    cout<<"Circumference: "<<c.circumference()<<endl;

    return 0;
}