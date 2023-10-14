/*Write a C++ program to find the sum of all elements in an array using recursion.*/

// #include<iostream>

// int sum(int arr[],int size){
//     if(size==0)
//         return 0;
//     return arr[size-1]+sum(arr,size-1);
// }

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     std::cout<<sum(arr,size)<<std::endl;
    
//     return 0;
// }



/*Write a C++ program to calculate the factorial of a given number using recursion.*/

// #include<iostream>

// int factorial(int num){
//     return (num==1||num==0)?1:num*factorial(num-1);
// }

// int main(){ 
//     int num;
    
//     std::cout<<"Enter a num"<<std::endl;
//     std::cin>>num;
//     std::cout<<"Factorial: "<<factorial(num)<<std::endl;

//     return 0;
// }


/*Write a C++ program to implement a recursive function to get the nth Fibonacci number.*/


// #include<iostream>

// int fib(int n){
//     if(n==0||n==1)
//         return n;
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n;
//     std::cout<<"Enter the nth term"<<std::endl;
//     std::cin>>n;

//     std::cout<<fib(n)<<std::endl;

//     return 0;
// }


//Fibonacci series

// #include<iostream>

// int fib(int n){
//     if(n==0||n==1)
//         return n;
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     int n;
//     std::cout<<"Enter the nth term"<<std::endl;
//     std::cin>>n;

//     for(int i=0; i<=n;i++)
//         std::cout<<fib(i);
//     std::cout<<std::endl; 

//     return 0;
// }


/*Write a C++ program to implement a recursive function to calculate the sum of digits of a given number.*/


#include<iostream>

int sum_of_digits(int num){
    
    if(num==0)
        return 0;
    return  (num%10)+sum_of_digits(num/10);
    
}

int main(){
    int num;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>num;

    std::cout<<"Sum: "<<sum_of_digits(num)<<std::endl;

    return 0;
}