 /* **Guessing Game:** Create a simple number guessing game where the computer selects a random number between 1 and 100, and the user has to guess it. Provide hints (higher or lower) until the user guesses correctly. Use a while loop to keep the game running until the user wins.*/ 
 
 #include<iostream>
 #include <cstdlib>
 #include <time.h>
 
using namespace std;

void check(int);

int generate_number(int N){
     srand(time(0));
     return rand() % N;
 }

void play(){
     int number;
     cout<<"Let me think!"<<endl;
     //Generate a random number between 1-100
     number = generate_number(100);
     
     //Ask the user to guess and compare it
     check(number);
 }


void check(int number){
    int guess, lives=5, running=1, play_again=1;
    cout<<"Number: "<<number<<endl;
    cout<<"Guess a number from 1-100"<<endl;
    cin>>guess;
    while(running){
        if(guess==number){
            cout<<"That's the correct guess!"<<endl;
            running = 0;
            break;
        }
        else if(guess>number){
            cout<<endl<<"Little lower";
            cout<<endl<<"Lives: "<<--lives<<endl;
            if(lives)
                cin>>guess;
            else{
                cout<<endl<<"You lose."<<endl;
                cout<<"Correct answer: "<<number;
                break;
            }
        } 
        else{
            cout<<endl<<"Little higher";
            cout<<endl<<"Lives: "<<--lives<<endl;
            if(lives)
                cin>>guess;
            else{
                cout<<endl<<"You lose."<<endl;
                cout<<"Correct answer: "<<number;
                break;
            }
        }
     }
    cout<<endl<<"Do you want to play again?Enter (1/0)."<<endl;
    cin>>play_again;
    if(play_again)
        play();
    else{
        cout<<"Have a nice day!"<<endl;
    }
 }


int main(){
    cout<<"Welcome to the number guessing game."<<endl;
    play();

    return 0;
}