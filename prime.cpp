#include<iostream>


using namespace std;

void prime(int num){
    int flag=0;
    if(num==1){
        cout<<"1 is neither a prime number nor a composite number."<<endl;
        return;
    }
        
    
    for(int i=2;i<num/2;i++){
        if(num%i==0 && num!=2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Not prime."<<endl;
    else
        cout<<"Prime."<<endl;
    
}

int main(){
    int num;
    cout<<"Enter a number to check for prime."<<endl;
    cin>>num;
    prime(num);
    
    return 0;
}