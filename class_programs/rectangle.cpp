#include<iostream>

using namespace std;

class Rectangle{
    private:
    //data_members;
    int length;
    int breadth;

    public:
    //Non-parameterised constructor; default constructor
    Rectangle(){
        length = 0;
        breadth = 0;
    }

    //Parameterised constructor
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }

    //member_functions
    int area(){
        return length*breadth;
    }

    int perimeter(){
        return 2*(length+breadth);
    }

    int getlength(){            //accessor method
        return length;
    }

    int getbreadth(){           //accessor method
        return breadth;
    }

    void setlength(int l){      //mutator method
        length = l;
    }

    void setbreadth(int b){     //mutator method
        breadth = b;
    }

    ~Rectangle(){               // just a demonstration of destructor
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Rectangle r(8, 4);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}