//Simple stack implementation

// #include<iostream>

// using namespace std;

// class Stack{
//     //data members
//     private:
//         int *stk;           //pointer to a dynamic array
//         int top;            //initial position of top, it is always increment hence '-1'
//         int size;           // the size desired by the user
    
//     //member functions    
//     public:
//         Stack(int size){
//             this->size=size;
//             top=-1;
//             stk= new int[size];
//         }
        
//         void push(int x);
//         int pop();
// };

// void Stack::push(int x){
//     if(top==size-1)
//         cout<<"Stack is full."<<endl;
//     else{
//         top++;              //top is incremented as it starts from -1
//         stk[top]=x;         //element is placed in the stack
//     }
// }

// int Stack::pop(){
//     int x=0;
//     if(top==-1)
//         cout<<"Stack is empty";
//     else{
//         x=stk[top];         //the element being deleted
//         top--;                //top position is reset
//     }
//     return x;               //popped element is returned
// }

// int main(){
//     Stack s(3);
//     s.push(5);
//     s.push(7);
//     s.push(8);
//     cout<<s.pop()<<endl;
    
//     return 0;
// }


// #include<iostream>

// using namespace std;

// class Stack{
//     //data members
//     private:
//         int *stk;           //pointer to a dynamic array
//         int top;            //initial position of top, it is always increment hence '-1'
//         int size;           // the size desired by the user
    
//     //member functions    
//     public:
//         Stack(int size){
//             this->size=size;
//             top=-1;
//             stk= new int[size];
//         }
        
//         void push(int x);
//         int pop();

            // ~Stack(){
            //     delete []stk;
            //     cout<<"Destructor called"<<endl;
            // }
// };

// void Stack::push(int x){
//     if(top==size-1)
//         cout<<"Stack is full."<<endl;
//     else{
//         top++;              //top is incremented as it starts from -1
//         stk[top]=x;         //element is placed in the stack
//     }
// }

// int Stack::pop(){
//     int x=0;
//     if(top==-1)
//         cout<<"Stack is empty";
//     else{
//         x=stk[top];         //the element being deleted
//         top--;                //top position is reset
//     }
//     return x;               //popped element is returned
// }

// int main(){
//     Stack s(3);
//     s.push(5);
//     s.push(7);
//     s.push(8);
//     cout<<s.pop()<<endl;
    
//     return 0;
// }



// Stack implementation using templates

#include<iostream>

using namespace std;

template<class T>
class Stack{
    //data members
    private:
        T *stk;           //pointer to a dynamic array
        int top;            //initial position of top, it is always increment hence '-1'
        int size;           // the size desired by the user
    
    //member functions    
    public:
        Stack(int size){
            this->size=size;
            top=-1;
            stk= new T[size];
        }
        
        void push(T x);
        T pop();
        ~Stack(){
            delete []stk;
            cout<<"Destructor called"<<endl;
        }
};

template<class T>
void Stack<T>::push(T x){
    if(top==size-1)
        cout<<"Stack is full."<<endl;
    else{
        top++;              //top is incremented as it starts from -1
        stk[top]=x;         //element is placed in the stack
    }
}

template<class T>
T Stack<T>::pop(){
    T x=0;
    if(top==-1)
        cout<<"Stack is empty";
    else{
        x=stk[top];         //the element being deleted
        top--;                //top position is reset
    }
    return x;               //popped element is returned
}

int main(){
    Stack<float> s(3);
    s.push(5.2);
    s.push(7);
    s.push(8.3);
    cout<<s.pop()<<endl;
    
    
    
    return 0;
}