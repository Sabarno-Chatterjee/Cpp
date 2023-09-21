//Write a C++ program to check whether a number is Armstrong number or not.

// #include<iostream>
// #include<math.h>

// using namespace std;

// void armstrong(int num){
//     int original_num=num, sum=0, count=0;
//     while(num){
//         count++;
//         num/=10;
//     }
    
//     num=original_num;
    
//     while(num){
//         sum+= pow(num%10, count);
//         num /= 10;
//     }
//     if(original_num==sum)
//         cout<<"Armstrong."<<endl;
//     else
//         cout<<"Not armstrong."<<endl;
    
// }

// int main(){
//     int num;
//     cout<<"Enter a number.\n"<<endl;
//     cin>>num;
//     armstrong(num);
    
//     return 0;
// }

// Can you convert a decimal number to binary?


#include<iostream>

using namespace std;

void to_binary(int num){
    int count =0, arr[100];
    while(num){
        arr[count] = num%2;
        count++;
        num/=2;
    }
    for(int i =count-1; i>=0;i--)
        cout<<arr[i];
}

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    to_binary(num);
    
    return 0;
}
