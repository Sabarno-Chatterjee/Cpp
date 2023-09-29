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

// #include<iostream>

// using namespace std;

// void sort_array(int arr[],int length){
//     int temp = 0;
//     for(int i=0; i<length-1; i++)
//         for(int j=0; j<length-1-i; j++){
//             if(arr[j]<arr[j+1]){
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

// Check if a year is a leap year or not.

// #include<iostream>

// using namespace std;

// void leap_year(int year){
//     if(year%4 == 0){
//         if(year%100==0){
//             if(year%400==0)
//                 cout<<"Leap Year."<<endl;
//             else
//                 cout<<"Not Leap Year."<<endl;
//         }
//         else
//             cout<<"Leap Year."<<endl;
//     }
//     else
//         cout<<"Not Leap Year."<<endl;
// }

// int main(){
//     int year;
//     cout<<"Enter a year."<<endl;
//     cin>>year;
//     leap_year(year);
    
//     return 0;
    
// }


//  Can you search for an element in a given array? Try to print that number if present else print -1.

// #include<iostream>

// using namespace std;

// void search_element(int arr[],int length,int num){
//     int flag = 1;
//     for(int i=0; i<length; i++){
//         if(arr[i]==num){
//             cout<<num<<endl;
//             flag = 0;
//             break;
//         }
//     }
//     if(flag)
//         cout<<"-1"<<endl;    
// }

// int main(){
//     int arr[]={45,32,12,64,2,4,42,64,23,75,21,41};
//     int length= sizeof(arr)/sizeof(arr[0]);
//     int num;
//     cout<<"Enter the number you want to check."<<endl;
//     cin>>num;
//     search_element(arr, length, num);
    
//     return 0;
// }


// Write a program to reverse an array or string

// #include<iostream>

// using namespace std;

// void reverse_array(int arr[],int length){
//     int reverse_arr[length];
//     for(int i=0; i<length;i++)
//         reverse_arr[i] = arr[length-1-i];
// }

// void print_array(int arr[],int n){
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";
    
//     cout<<endl;    
// }

// int main(){
//     int arr[]={34,23,67,43,65,97,23,41};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     reverse_array(arr, length);
//     print_array(arr, length);
    
//     return 0;
// }

// Write a program to copy the contents of one array into another
// in the reverse order.

// #include<iostream>

// using namespace std;

// void reverse_array(int arr[],int length){
//     int reverse_arr[length];
//     for(int i=0; i<length;i++)
//         reverse_arr[i] = arr[length-1-i];
// }

// void print_array(int arr[],int n){
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";
    
//     cout<<endl;    
// }

// int main(){
//     int arr[]={34,23,67,43,65,97,23,41};
//     int length = sizeof(arr)/sizeof(arr[0]);
//     reverse_array(arr, length);
//     print_array(arr, length);
    
//     return 0;
// }


// If an array arr contains n elements, then write a program to
// check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.

// #include<iostream>

// using namespace std;

// // Function to check if arr[0] = arr[n-1], arr[1] = arr[n-2], and so on.
// bool check_array(int arr[], int n) {
//     for (int i = 0; i <= n / 2; i++) {
//         if (arr[i] != arr[n - (1 + i)])
//             return false; // If any pair of elements don't match, return false.
//     }
//     return true; // If all pairs match, return true.
// }

// int main() {
//     int arr[] = {45, 32, 64, 12, 73, 32, 46, 21, 64, 48, 45};
//     int length = sizeof(arr) / sizeof(arr[0]);
    
//     if (check_array(arr, length))
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;
    
//     return 0;
// }

// Write a program which performs the following tasks:
// − initialize an integer array of 10 elements in main( )
// − pass the entire array to a function modify( )
// − in modify( ) multiply each element of array by 3
// − return the control to main( ) and print the new array
// elements in main( )

// #include<iostream>

// using namespace std;

// void modify(int arr[],int length){
//     for(int i=0; i<length; i++)
//         arr[i] *= 3;
// }

// int main(){
//     int arr[10]={3,2,1,6,4,2,5,9,4,1};
//     int length=sizeof(arr)/sizeof(arr[0]);
    
//     modify(arr, length);
    
//     for(int i=0; i<length; i++)
//         cout<<arr[i]<<" ";
        
//     cout<<endl;
    
//     return 0;
// }

// Reading an unknown number of inputs

// #include<iostream>

// int main(){
//     int value=0, sum=0;
    
//     while(std::cin>>value)
//         sum+=value;
    
//     std::cout<<sum<<std::endl;

//     return 0;
// }

// matrix addition

#include<iostream>

using namespace std;

#define m 3
#define n 3

void add(int matrix1[m][n],int matrix2[m][n],int result[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtract(int matrix1[m][n],int matrix2[m][n],int result[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void print_matrix(int matrix[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0; j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
}

int main(){
    int matrix1[m][n]={{1,2,1},{2,1,2},{1,2,1}};
    int matrix2[m][n]={{1,1,1},{1,1,1},{1,1,1}};
    int result[m][n];

    add(matrix1,matrix2,result);
    print_matrix(result);

    // matrix subtraction
    subtract(matrix1,matrix2,result);
    print_matrix(result);

    

    return 0;
}




