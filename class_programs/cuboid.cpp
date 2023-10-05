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
    int getLength(){            //accessor method
        return length;
    }
    int getBreadth(){           //accessor method
        return breadth;
    }

    //mutator methods
    void setLength(int l);
    void setBreadth(int b);

    //facilitators
    int area();
    int perimeter();
};

class Cuboid:public Rectangle{
    //data members 
    private:
    int height;
    
    public:
    //member member functions
    Cuboid(int l=0, int b=0, int h=0);
    Cuboid(Cuboid &c);
    //accesor methods
    int getHeight(){return height;}
    //mutator methods
    void setHeight(int h);
    //facilitators
    int volume();
};

int main(){
    Rectangle r(8,9);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    
    Cuboid c(2,3,4);
    cout<<c.volume()<<endl;
    
    Cuboid c1(c);
    cout<<c1.volume()<<endl;

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

void Rectangle::setLength(int l){
    length=l;
}
    
void Rectangle::setBreadth(int b){
    breadth=b;
}

    
int Rectangle::area(){
    return length*breadth;
}
    
int Rectangle::perimeter(){
    return 2*(length+breadth);
}

Cuboid::Cuboid(int l, int b, int h){
    setLength(l);
    setBreadth(b);
    this->height=h;
}
Cuboid::Cuboid(Cuboid &c){
    this->height=c.height;
    setLength(c.getLength());
    setBreadth(c.getBreadth());
}

void Cuboid::setHeight(int h){
    this->height=h;
}
    

int Cuboid::volume(){
    return getLength()*getBreadth()*height;
}