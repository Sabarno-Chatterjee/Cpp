#include<iostream>

using namespace std;

#define PI 3.14

class Sphere{
    //data members
    private:
    float radius;

    public:
    //non parameterised constructor; default constructor
    Sphere(){
        radius=0;
    }

    //parameterised constructor
    Sphere(float r){
        radius=r;
    }

    //member functions
    float diameter(){
        return 2*radius;
    }

    float area(){
        return 4*PI*radius*radius;
    }

    float volume(){
        return (4.0/3.0)*PI*radius*radius*radius;
    }

    //accessor method
    float getRadius(){
        return radius;
    }

    //mutator method
    void setRadius(int r){
        radius = r;
    }

    //destructor
    ~Sphere(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Sphere s(4.2);

    cout<<"Surface Area: "<<s.area()<<endl;
    cout<<"Volume: "<<s.volume()<<endl;

    return 0;
}