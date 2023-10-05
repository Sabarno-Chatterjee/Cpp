// inheritance

#include<iostream>
#include<cmath>

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
    int Lateral_Surface_Area();
    int Total_Surface_Area();
    float Diagonal();
    int Perimeter_Cuboid();
};

int main(){
    Cuboid c(2,3,4);
    cout<<c.volume()<<endl;
    
    // Cuboid c1(c);
    // cout<<c1.volume()<<endl;
    cout<<"Volume: "<<c.volume()<<endl;
    cout<<"Lateral Surface Area: "<<c.Lateral_Surface_Area()<<endl;
    cout<<"Total Surface Area: "<<c.Total_Surface_Area()<<endl;
    cout<<"Diagonal: "<<c.Diagonal()<<endl;
    cout<<"Perimeter: "<<c.Perimeter_Cuboid()<<endl;

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

int Cuboid::Lateral_Surface_Area(){
    return 2*height*(getLength() + getBreadth());
}

int Cuboid::Total_Surface_Area(){
    return 2*(getLength()*getBreadth() + getBreadth()*height + height*getLength());
}

float Cuboid::Diagonal(){
    return sqrt(pow(getLength(),2)+pow(getBreadth(),2)+pow(height,2));
}

int Cuboid::Perimeter_Cuboid(){
    return 4*(getLength()+getBreadth()+height);
}