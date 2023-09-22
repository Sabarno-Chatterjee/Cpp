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


// #include<iostream>

// using namespace std;

// void to_binary(int num){
//     int count =0, arr[100];
//     while(num){
//         arr[count] = num%2;
//         count++;
//         num/=2;
//     }
//     for(int i =count-1; i>=0;i--)
//         cout<<arr[i];
// }

// int main(){
//     int num;
//     cout<<"Enter a number"<<endl;
//     cin>>num;
//     to_binary(num);
    
//     return 0;
// }


//Now can you revert back the original number from binary? Convert Binary to Decimal number.

// #include<iostream>
// #include<math.h>

// using namespace std;

// void binary_to_decimal(int num){
//     int decimal=0, i=0;
//     while(num){
//         decimal += num%10 * pow(2, i);
//         num /= 10;
//         i++;
//     }
//     cout<<decimal<<endl;
// }

// int main(){
//     int num;
//     cout<<"Enter a binary number."<<endl;
//     cin>>num;
//     binary_to_decimal(num);
    
//     return 0;
// }

//Find the maximum number in an array of integers.

//Find the maximum number in an array of integers.

// #include<iostream>

// using namespace std;

// int max(int arr[], int length){
//     int temp=0;
//     for(int i=0; i<length-1; i++)
//         for(int j=0; j<length-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     return arr[length-1];
// }

// int main(){
//     int arr[]={103,56,34,12,102,43,23,78,54,32,43,189};
//     int length= sizeof(arr)/sizeof(arr[0]);
//     cout<<"Max: "<<max(arr, length)<<endl;
    
//     return 0;
// }

//Can you find out the sum of the digits of a number?

// #include<iostream>

// using namespace std;

// int sum_of_digits(int num){
//     int sum=0;
//     while(num){
//         sum+= num%10;
//         num/=10;
//     }
//     return sum;
// }

// int main(){
//     int num;
//     cout<<"Enter a number"<<endl;
//     cin>>num;
//     cout<<"Sum: "<<sum_of_digits(num)<<endl;
    
//     return 0;
// }

// Try to swap two numbers with a third variable.

// #include<iostream>

// using namespace std;

// int main(){
//     int a=6, b=9, temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    
//     return 0;
    
// }

//Can you now swap two numbers without a third variable?

// #include<iostream>

// using namespace std;

// int main(){
//     int a =6, b=9;
//     a=a+b;
//     b=a-b;
//     a=a-b;
    
//     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    
//     return 0;
// }

//Swap two numbers using pointers.

// #include<iostream>

// using namespace std;

// void swap(int *a, int *b){
//     *a+=*b;
//     *b = *a-*b;
//     *a = *a-*b;
//     cout<<"a: "<<*a<<" "<<"b: "<<*b<<endl;
// }

// int main(){
//     int a=6, b=9;
//     swap(&a, &b);
    
//     return 0;
// }

//Can you check whether a number is prime or not?

// #include<iostream>

// using namespace std;

// void check_prime(int num){
//     if(num==1){
//         cout<<"One is neither a prime nor a composite number."<<endl;
//         return;
//     }
//     int flag=1;
//     for(int i =2; i<num/2; i++)
//         if(num%i==0 && num!=2)
//         {
//             cout<<"Not prime."<<endl;
//             flag = 0;
//             break;
//         }
//     if(flag)
//         cout<<"Prime.";
    
        
// }

// int main(){
//     int num;
//     cout<<"Enter a number to check for prime."<<endl;;
//     cin>>num;
//     check_prime(num);
    
//     return 0;
// }

// Write a program to find the reverse of a number.

// #include<iostream>

// using namespace std;

// int reverse(int num){
//     int rev=0;
//     while(num){
//         rev = 10*rev+ num%10;
//         num /= 10;
//     }
    
//     return rev;
// }

// int main(){
//     int num;
//     cout<<"Enter a number."<<endl;
//     cin>>num;
    
//     cout<<reverse(num);
    
//     return 0;
// }

// Now when you know to reverse a number, can you try to check whether a number is a palindrome or not?

// #include<iostream>

// using namespace std;

// int check_pallindrome(int num){
//     int rev=0, original_num = num;
//     while(num){
//         rev = 10*rev+ num%10;
//         num /= 10;
//     }
   
//     return (original_num==rev) ? 1 : 0;
    
// }

// int main(){
//     int num;
//     cout<<"Enter a number."<<endl;
//     cin>>num;
    
//     if(check_pallindrome(num)) 
//         cout<<"Pallindrome."<<endl;
//     else 
//         cout<<"Not pallindrome."<<endl;
    
//     return 0;
// }

//Find the factorial of a number.

// #include<iostream>

// using namespace std;

// int factorial(int num){
//     return (num==1 || num==0) ? 1 : num*factorial(num-1);
// }

// int main(){
//     int num;
//     cout<<"Enter a number"<<endl;
//     cin>>num;
    
//     cout<<factorial(num);
    
//     return 0;
// }

// Write a C++ program to check whether a number is Armstrong number or not.

// #include<iostream>
// #include<math.h>

// using namespace std;

// void armstrong(int num){
//     int count=0, check=0, original_num=num;
//     while(num){
//         count++;
//         num/=10;
//     }
    
//     num=original_num;
    
//     while(num){
//         check += pow(num%10,count);
//         num/=10;
//     }
    
//     if(check==original_num) 
//         cout<<"Armstrong"<<endl;
//     else
//         cout<<"Not armstrong"<<endl;
// }

// int main(){
//     int num;
    
//     cout<<"Enter a number."<<endl;
//     cin>>num;
    
//     armstrong(num);
    
//     return 0;
    
// }

//Do you know about Fibonacci Series? The series following 1,1,2,3,5,8…, can you try to print the series upto n elements?

// #include<iostream>

// using namespace std;

// int fib(int n){
//     return (n==0 || n==1) ? n : fib(n-1)+fib(n-2);
// }

// int main(){
//     int num;
//     cout<<"Enter the no. of terms."<<endl;
//     cin>>num;
//     for(int i=0; i<num; i++)
//         cout<<fib(i);
    
//     return 0;
// }

// Given an array of integers, sort the given array in ascending order.

// #include<iostream>

// using namespace std;

// void sort_array(int arr[],int length){
//     int temp = 0;
//     for(int i=0; i<length-1; i++)
//         for(int j=0; j<length-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
// }

// void print_array(int arr[],int length){
//     for(int i = 0; i<length; i++)
//         cout<<arr[i]<<" ";
// } 


// int main(){
//     int arr[]= {56,34,23,76,67,2,1,32,12,53,532,97,5,3,1,2};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     sort_array(arr, length);
//     print_array(arr, length);
    
//     return 0;
// }

// Given an array of integers, sort the given array in descending order.

#include<iostream>

using namespace std;

void sort_array(int arr[],int length){
    int temp = 0;
    for(int i=0; i<length-1; i++)
        for(int j=0; j<length-1-i; j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}

void print_array(int arr[],int length){
    for(int i = 0; i<length; i++)
        cout<<arr[i]<<" ";
} 


int main(){
    int arr[]= {56,34,23,76,67,2,1,32,12,53,532,97,5,3,1,2};
    int length = sizeof(arr)/sizeof(arr[0]);
    sort_array(arr, length);
    print_array(arr, length);
    
    return 0;
}