#include<iostream>

using namespace std;

class Square{
    private:
    //data_members
    int side;

    public:
    //member functions
    Square(){                           //default constructor
        side=0;
    }

    Square(int s){                      // parameterised constructor
        side = s;
    }

    int area(){ 
        return side*side;
    }

    int perimeter(){
        return 4*side;
    }

    int getSide(){                      //accessor methods
        return side;
    }

    void setSide(int s){                //mutator methods
        side = s;
    }

    ~Square(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Square s(8);
    cout<<"Area: "<<s.area()<<endl;
    cout<<"Perimeter: "<<s.perimeter()<<endl;

    return 0;
}