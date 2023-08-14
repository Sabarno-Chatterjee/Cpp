#include<iostream>
using namespace std;

class Triangle{
    private:
    //data_members
    float height;
    float base;

    public:
    //default constructor
    Triangle(){
        base = 0;
        height = 0;
    }

    //parameterized constructor

    Triangle(float h, float b){
        height = h;
        base = b;
    }

    float area(){
        return 0.5*base*height;
    }

    //Accessor methods
    float getHeight(){
        return height;
    }

    float getBase(){
        return base;
    }

    //Mutator methods

    void setHeight(float h){
        height = h;
    }

    void setBase(float b){
        base = b;
    }

    //Destructor
    ~Triangle(){
        cout<<"Destructor"<<endl;
    }
};

int main(){

    Triangle t(6.5,2.3);
    cout<<"Area: "<<t.area()<<endl;

    return 0;
}