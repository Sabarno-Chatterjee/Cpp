// Write a program that uses a while loop to print numbers from 1 to 10.

// #include<iostream>

// using namespace std;

// void count_up(){
//     int num=1;
//     while(num<=10){
//         cout<<num<<endl;
//         num++;
//     }
// }

// int main(){
//     count_up();
    
//     return 0;
// }




// Write a program that uses a while loop to print numbers from 10 to 1 in descending order.

// #include<iostream>

// using namespace std;

// void count_down(){
//     int num=10;
//     while(num){
//         cout<<num<<endl;
//         num--;
//     }
// }

// int main(){
//     count_down();
    
//     return 0;
// }


// Create a program that calculates and prints the sum of all numbers from 1 to 100 using a while loop.
//using iteration

// #include<iostream>

// using namespace std;

// int sum(){
//     int num=100, s=0;
//     while(num){
//         s+=num;
//         num--;
//     }
//     return s;
// }

// int main(){
    
//     cout<<"Sum: "<<sum()<<endl;
    
//     return 0;
// }

// Create a program that calculates and prints the sum of all numbers from 1 to 100 using a while loop.


//Gauss sum

// #include<iostream>

// using namespace std;

// int sum(){
//     int num=100;
    
//     return num*(num+1)/2;
// }

// int main(){
    
//     cout<<"Sum: "<<sum()<<endl;
    
//     return 0;
// }

//Using recursion

// #include<iostream>

// using namespace std;

// int sum(int num){
//     if(num==0)
//         return 0;
    
//     return num + sum(num-1);
// }

// int main(){
    
//     cout<<"Sum: "<<sum(100)<<endl;
    
//     return 0;
// }

// Write a program that calculates the factorial of a given number using a while loop.

// #include<iostream>

// using namespace std;

// void factorial(int num){
//     int f=1;
//     while(num){
//         f *= num;
//         num--;
//     }
//     cout<<f;
// }

// int main(){
//     int num;
//     cout<<"Enter"<<endl;
//     cin>>num;
//     factorial(num);
    
//     return 0;
// }

 
// Print the multiplication table (up to 10) for a given number using a while loop.

// #include<iostream>

// using namespace std;

// void table(int num){
//     int i=1;
//     while(i<=10){
//         cout<<num<<" x "<<i<<" = "<<num*i<<endl;
//         i++;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter a num."<<endl;
//     cin>>num;
//     table(num);
    
//     return 0;
// }


// Generate and print the first 10 numbers in the Fibonacci sequence using a while loop.

// #include<iostream>

// using namespace std;

// void fibonacci(int num){
//     int t1=0, t2=1;
//     while(num){
//         cout<<t1<<" ";
//         int sum= t1+t2;
//         t1=t2;
//         t2=sum;
//         num--;
//     }
// }

// int main(){
//     fibonacci(10);
    
//     return 0;
// }

// Write a C++ program to calculate and print the product of the first 10 positive integers using a while loop.

// #include<iostream>

// using namespace std;

// void product(int n){
//     int p=1;
//     while(n){
//         p *= n;
//         n--;
//     }
//     cout<<p<<endl;
// }

// int main(){
//     product(10);
    
//     return 0;
// }

// Sum of all even numbers till 100

// #include<iostream>

// using namespace std;

// void sum(int n){
//     int s=0;
//     while(n){
//         if(n%2==0)
//             s+=n;
//         n--;
//     }
//     cout<<s;
// }

// int main(){
//     sum(100);
    
//     return 0;
// }

// Write a program that asks the user to enter a password. Keep asking for the password until the correct password is entered. Use a while loop to achieve this.

// #include<iostream>

// using namespace std;

// void compare(int password, int user_password){
//     bool flag=false;
//     while(!flag){
//         if(password!=user_password){
//             cout<<"Wrong password!"<<endl;
//             cout<<"Enter again"<<endl;
//             cin>>password;
//         }
//         else{
//             cout<<"Correct password."<<endl;
//             flag=true;
//         }
//     }
// }

// int main(){
//     int user_password = 1234, password=0;
//     cout<<"Enter the password"<<endl;
//     cin>>password;
//     compare(password, user_password);

//     return 0;
// }

// Write a program that calculates and prints the powers of 2 from 1 to 10 (2^1, 2^2, 2^3, etc.) using a while loop.

// #include<iostream>
// #include<math.h>

// using namespace std;

// void print_power(int n){
//     int i=1;
//     while(i<=10){
//         cout<<n<<"^"<<i<<" = "<<pow(n,i)<<endl;
//         i++;
//     }
// }

// int main(){
//     print_power(5);

//     return 0;
// }


//  Write a program that asks the user to enter a number and then finds and prints all the factors of that number using a while loop.

#include<iostream>

void factors(int n){
    int i=1;
    while(i<=n/2){
        if(n%i==0)
            std::cout<<i<<" ";
        i++;
    }
    std::cout<<n<<std::endl;
}

int main(){
    int num;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>num;

    factors(num);

    return 0;
}

