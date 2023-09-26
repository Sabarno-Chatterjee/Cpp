 /* **Guessing Game:** Create a simple number guessing game where the computer selects a random number between 1 and 100, and the user has to guess it. Provide hints (higher or lower) until the user guesses correctly. Use a while loop to keep the game running until the user wins.*/ 
 
 #include<iostream>
 #include <cstdlib>
 #include <time.h>
 
 using namespace std;
 
 void check(int guess, int number){
     while(guess!=number){
         if(guess>number){
            cout<<"Little lower";
            cin>>guess;
         } 
         else{
             cout<<"Little higher";
             cin>>guess;
         }
     }
 }
 int think(int N){
     srand(time(0));
     return rand() % N;
 }
 int main(){
     int number, guess;
     
     cout<<"Welcome to Number Guessing Game"<<endl;
     cout<<"Let me think!"<<endl;
     number = think(100);
     
     cout<<"Guess a number from 1-100"<<endl;
     cin>>guess;
     
     check(guess, number);
     
     return 0;
 }