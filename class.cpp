//Basic structure of class 

#include<iostream>

using namespace std;

class Rectangle{
private:
    // data_members
    int length;
    int breadth;

public:
    //member functions
    Rectangle()     //Non parameterised constructor; default constructor
    {
        length=breadth=1;
        }
    Rectangle(int l, int b){    //Parameterised constructor
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    int getlength(){        //Accessor functions
        return length;
    }

    int getbreadth(){       //Accessor functions
        return breadth;
    }

    void setlength(int l){      //Mutator functions
        length=l;
    }

    void setbreadth(int b){     //Mutator functions
        breadth=b;
    }

    ~Rectangle(){
        cout<<"Destructor";
    }
};


int main(){
    Rectangle r(10, 5);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}