// Write a C++ program that uses a switch-case statement to take an integer input from the user (1 to 7) and display the corresponding day of the week.

// #include<iostream>

// using namespace std;

// void day_of_week(int day){
//     switch(day){
//         case 1:
//             cout<<"Monday"<<endl;
//             break;
//         case 2:
//             cout<<"Tuesday"<<endl;
//             break;
//         case 3:
//             cout<<"Wednesday"<<endl;
//             break;
//         case 4:
//             cout<<"Thursday"<<endl;
//             break;
//         case 5:
//             cout<<"Friday"<<endl;
//             break;
//         case 6:
//             cout<<"Saturday"<<endl;
//             break;
//         case 7:
//             cout<<"Sunday"<<endl;
//             break;
//         default:
//             cout<<"Invalid input"<<endl;
            
//     }
// }

// int main(){
//     int day;
//     cout<<"Enter"<<endl;
//     cin>>day;
//     day_of_week(day);
    
//     return 0;
// }

/*Create a C++ program that uses a switch-case statement to calculate the grade of a student based on their percentage score. The program should take the percentage as input and then display the corresponding grade (A, B, C, D, or F).*/

// #include<iostream>

// using namespace std;

// void grade(float percentage){
//     char grade;
//     if(percentage>=90.0)
//         grade = 'A';
//     else if(percentage>=80.0)
//         grade = 'B';
//     else if(percentage>=70.0)
//         grade = 'C';
//     else if(percentage>=60.0)
//         grade = 'D';
//     else if(percentage>=50.0)
//         grade = 'E';
//     else
//         grade = 'F';

//     switch(grade){
//         case 'A':
//             cout<<"Grade A: Excellent"<<endl;
//             break;
//         case 'B':
//             cout<<"Grade B: Good"<<endl;
//             break;
//         case 'C':
//             cout<<"Grade C: Satisfactory"<<endl;
//             break;
//         case 'D':
//             cout<<"Grade D: Average"<<endl;
//             break;
//         case 'E':
//             cout<<"Grade E: Needs Improvement"<<endl;
//             break;
//         case 'F':
//             cout<<"Grade F: Fail"<<endl;
//             break;
//         default:
//             cout<<"Invalid percentage entered."<<endl;    
//     }
// }

// int main(){
//     float percentage;
//     cout<<"Enter the percentage of the student."<<endl;
//     cin>>percentage;
//     grade(percentage);

//     return 0;
// }

/*Create a C++ program that takes a day number (1 to 7) as input and uses a switch-case statement to determine whether it's a weekday or a weekend day.*/

// #include<iostream>

// using namespace std;

// void check_day(int day){
//     switch(day){
//         case 1:
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//             cout<<"Weekday"<<endl;
//             break;
//         case 6:
//         case 7:
//             cout<<"Weekend. Party Time!"<<endl;
//             break;
//         default: 
//             cout<<"Invalid Input"<<endl;
//     }
// }

// int main(){
//     int day;
//     cout<<"Enter a day(1-7)"<<endl;
//     cin>>day;
//     check_day(day);

//     return 0;
// }


/*Develop a C++ program that uses a switch-case statement to take the month as input (1 to 12) and determines the season (e.g., spring, summer, fall, or winter) based on the month entered.*/

// #include<iostream>

// using namespace std;

// void season(int month){
//     switch(month){
//         case 1:
//         case 2:
//         case 12:
//             cout<<"Winter"<<endl;
//             break;
//         case 3:
//         case 4:
//             cout<<"Spring"<<endl;
//             break;
//         case 5:
//         case 6:
//             cout<<"Summer"<<endl;
//             break;
//         case 7:
//         case 8:
//             cout<<"Rainy"<<endl;
//             break;
//         case 9:
//         case 10:
//         case 11:
//             cout<<"Fall"<<endl;
//             break;
//         default:
//             cout<<"Invalid input"<<endl;
//     }
// }

// int main(){
//     int month;

//     cout<<"Enter a month between 1-12"<<endl;
//     cin>>month;
//     season(month);

//     return 0;
// }

/*Write a C++ program that uses a switch-case statement to take an integer input (1 to 12) representing a month and then displays the number of days in that month. Consider leap years.*/

// #include<iostream>

// using namespace std;

// bool check_leap_year(int year){
//     if(year%4==0){
//         if(year%100==0){
//             if(year%400==0)
//                 return true;
//             else
//                 return false;
//         } else{
//             return true;
//         }
//     } else{
//         return false;
//     }
// }

// void check_days(int month,int year){
//     if(check_leap_year(year))
//         month=13;

//     switch(month){
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             cout<<"31 days"<<endl;
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             cout<<"30 days"<<endl;
//             break;
//         case 2: 
//             cout<<"28 days"<<endl;
//             break;
//         case 13:
//             cout<<"29 days"<<endl;
//             break;
//         default:
//             cout<<"Invalid input"<<endl;
//     }
// }

// int main(){
//     int month, year;
//     cout<<"Enter the month(1-12) and year."<<endl;
//     cin>>month>>year;
//     check_days(month, year);

//     return 0;
// }

// Write a C++ program that simulates a traffic light using a switch-case statement. The program should take a color (red, yellow, or green) as input and display the action drivers should take (stop, prepare to stop, go) based on the color.

// #include<iostream>

// using namespace std;

// void action(string color_str){
//     int color;
//     if(color_str=="red")
//         color=1;
//     else if (color_str=="yellow")
//         color=2;
//     else if(color_str=="green")
//         color=3;
//     else
//         cout<<"Invalid input"<<endl;

//     switch(color){
//         case 1:
//             cout<<"Stop"<<endl;
//             break;
//         case 2:
//             cout<<"Prepare to stop"<<endl;
//             break;
//         case 3:
//             cout<<"Go"<<endl;
//             break;
//         default:
//             cout<<"Invalid input"<<endl;
//     }
// }

// int main(){
//     string color;
//     cout<<"Enter red/yellow/green."<<endl;
//     cin>>color;
//     action(color);

//     return 0;
// }

/*Develop a basic menu-driven program in C++ using a switch-case statement. The menu should have options to print "Hello," "Goodbye," or "Quit" the program based on user input.*/

// #include<iostream>

// void message(int user_input){
//     switch(user_input){
//         case 1:
//             std::cout<<"Hello"<<std::endl;
//             break;
//         case 2:
//             std::cout<<"Goodbye"<<std::endl;
//             break;
//         case 3:
//             std::cout<<"Quit"<<std::endl;
//             break;
//         default:
//             std::cout<<"Invalid input"<<std::endl;
//     }
// }

// int main(){
//     int user_input;
//     std::cout<<"Enter a number(1/2/3)"<<std::endl;
//     std::cin>>user_input;
//     message(user_input);

//     return 0;
// }


// Write a C++ program that takes an integer as input and uses a switch-case statement to determine if it's an even or odd number.

// #include<iostream>

// void check_num(int num){
//     int type;
//     if(num%2==0)
//         type=1;
//     else
//         type=2;

//     switch(type){
//         case 1:
//             std::cout<<"Even"<<std::endl;
//         case 2:
//             std::cout<<"Odd"<<std::endl;
//         default:
//             std::cout<<"Not a valid input"<<std::endl;
//     }
// }

// int main(){
//     int num;
//     std::cout<<"Enter a number"<<std::endl;
//     std::cin>>num;
//     check_num(num);

//     return 0;
// }


/*Write a C++ program that uses a switch-case statement to determine whether a given character entered by the user is a vowel (a, e, i, o, u), a consonant, a digit, or a special character.*/


// #include<iostream>

// using namespace std;

// void check_character(char ch){
//     if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
//         cout<<"Vowel"<<endl;
//     else if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
//         cout<<"Consonent"<<endl;
//     else if(ch>=48 && ch<=57)
//         cout<<"Digits"<<endl;
//     else
//         cout<<"Special character"<<endl;  
// }

// int main(){
//     char ch;
//     cout<<"Enter a character"<<endl;
//     cin>>ch;
//     check_character(ch);

//     return 0;
// }


/*Create a C++ program that takes a length in inches, feet, or meters as input along with the unit type and uses a switch-case statement to convert and display the length in the desired unit.*/

// #include<iostream>

// using namespace std;

// float convert(float length,string unit,string desired_unit){
//     int condition;
//     if(unit=="inches")
//         if(desired_unit=="feet")
//             condition=1;
//         else if(desired_unit=="meters")
//             condition=2;
//         else
//             cout<<"Unit not supported."<<endl;
//     else if(unit=="meters")
//         if(desired_unit=="inches")
//             condition=3;
//         else if(desired_unit=="feet")
//             condition=4;
//         else
//             cout<<"Unit not supported."<<endl;
//     else if(unit=="feet")
//         if(desired_unit=="inches")
//             condition=5;
//         else if(desired_unit=="meters")
//             condition=6;
//         else
//             cout<<"Unit not supported."<<endl;
//     else{
//         cout<<"Unit not supported."<<endl;
//         return -1;
//     }

//     switch(condition){
//         case 1:
//             return length/12;
//             break;
//         case 2:
//             return length/39.37;
//             break;
//         case 3:
//             return length*39.37;
//             break;
//         case 4:
//             return length*3.281;
//             break;
//         case 5:
//             return length*12;
//             break;
//         case 6:
//             return length/3.281;
//             break;
//         default:
//             cout<<"Conversion type not supported"<<endl;
//             return -1;
//     }

// }

// void process_data(){
//     float length;
//     string unit, desired_unit;

//     cout<<"Enter the length"<<endl;
//     cin>>length;

//     cout<<"Enter the unit(inches, feet, or meters)."<<endl;
//     cin>>unit;

//     cout<<"Enter the desired unit(inches, feet, or meters)."<<endl;
//     cin>>desired_unit;

//     cout<<convert(length, unit, desired_unit)<<endl;
// }

// int main(){
//     process_data();
//     return 0;
// }



// Menu based matrix operations(add,mul,sub)

#include<iostream>

using namespace std;

#define m 3
#define n 3

void user_input(int matrix[m][n]){

    for(int i=0; i<m;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
}

void print_matrix(int matrix[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++)
            cout<<matrix[i][j];
        cout<<endl;
    }
}

void multiply_matrix(int matrix1[m][n],int matrix2[m][n],int result[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j]=0;
            for(int k=0; k<n;k++){
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

void add_matrix(int matrix1[m][n],int matrix2[m][n],int result[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j] = matrix1[i][j]+matrix2[i][j];
        }
        }
    }

void subtract_matrix(int matrix1[m][n],int matrix2[m][n],int result[m][n]){
    for(int i=0; i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j] = matrix1[i][j]-matrix2[i][j];
        }
        }
    }


void operation(int matrix1[m][n], int matrix2[m][n],int result[m][n]){
    char operation;
    int choice;
    cout<<"Enter the operation you tou want to perform.('+','-','*')"<<endl;
    cin>>operation;

    if(operation=='+')
        choice=1;
    else if(operation=='-')
        choice=2;
    else if(operation=='*')
        choice=3;
    else
        cout<<"Invalid choice"<<endl;

    switch(choice){
        case 1:
            add_matrix(matrix1, matrix2, result);
            break;
        case 2:
            add_matrix(matrix1, matrix2, result);
            break;
        case 3:
            add_matrix(matrix1, matrix2, result);
            break;
        default:
            cout<<"Operation not supported";
    }

}


int main(){
    int matrix1[m][n], matrix2[m][n], result[m][n];
    // add data to the matrix1
    cout<<"Enter the elements for matrix 1."<<endl;
    user_input(matrix1);

    cout<<endl;

    // add data to the matrix2
    cout<<"Enter the elements for matrix 2."<<endl;
    user_input(matrix2);

    operation(matrix1,matrix2,result);

    print_matrix(result);

    return 0;
}