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

#include<iostream>

using namespace std;

void grade(float percentage){
    char grade;
    if(percentage>=90.0)
        grade = 'A';
    else if(percentage>=80.0)
        grade = 'B';
    else if(percentage>=70.0)
        grade = 'C';
    else if(percentage>=60.0)
        grade = 'D';
    else if(percentage>=50.0)
        grade = 'E';
    else
        grade = 'F';

    switch(grade){
        case 'A':
            cout<<"Grade A: Excellent"<<endl;
            break;
        case 'B':
            cout<<"Grade B: Good"<<endl;
            break;
        case 'C':
            cout<<"Grade C: Satisfactory"<<endl;
            break;
        case 'D':
            cout<<"Grade D: Average"<<endl;
            break;
        case 'E':
            cout<<"Grade E: Needs Improvement"<<endl;
            break;
        case 'F':
            cout<<"Grade F: Fail"<<endl;
            break;
        default:
            cout<<"Invalid percentage entered."<<endl;    
    }
}

int main(){
    float percentage;
    cout<<"Enter the percentage of the student."<<endl;
    cin>>percentage;
    grade(percentage);

    return 0;
}