// inheritance

#include<iostream>

using namespace std;

class Rectangle{
    private:
    //data_members;
    int length;
    int breadth;

    public:
     //Parameterised constructor
    Rectangle(int l=0, int b=0);
    //Copy constructor
    Rectangle(Rectangle &r);
    //member_functions
    int getlength(){            //accessor method
        return length;
    }
    int getbreadth(){           //accessor method
        return breadth;
    }

    //mutator methods
    void setlength(int l);
    void setbreadth(int b);

    //facilitators
    int area();
    int perimeter();
};

int main(){
    Rectangle r(8,9);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}

Rectangle::Rectangle(int l, int b){
    length=l;
    breadth=b;
}
    
Rectangle::Rectangle(Rectangle &r){
    this->length=r.length;
    this->breadth=r.breadth;
}

void Rectangle::setlength(int l){
    length=l;
}
    
void Rectangle::setbreadth(int b){
    breadth=b;
}

    
int Rectangle::area(){
    return length*breadth;
}
    
int Rectangle::perimeter(){
    return 2*(length+breadth);
}