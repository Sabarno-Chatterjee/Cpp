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

#include<iostream>

int factorial(int num){
    return (num==1||num==0)?1:num*factorial(num-1);
}

int main(){ 
    int num;
    
    std::cout<<"Enter a num"<<std::endl;
    std::cin>>num;
    std::cout<<"Factorial: "<<factorial(num)<<std::endl;

    return 0;
}