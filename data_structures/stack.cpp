#include<iostream>

using namespace std;

class Stack{
    //data members
    private:
        int *stk;
        int top;
        int size;
    
    //member functions    
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            stk= new int[size];
        }
        
        void push(int x);
        int pop();
};

void Stack::push(int x){
    if(top==size-1)
        cout<<"Stack is full."<<endl;
    else{
        top++;
        stk[top]=x;
    }
}

int main(){
    
    return 0;
}