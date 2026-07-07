#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
    int number=rand()%100+1;
    int guess;
    int attempts=0;
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I have chosen a number between 1 and 100."<<endl;
    while(true){
        cout<<"\nEnter your guess: ";
        cin>>guess;
        attempts++;
        if(guess<number){
            cout<<"Too low! Try again."<<endl;
        }
        else if(guess>number){
            cout<<"Too high! Try again."<<endl;
        }
        else{
            cout<<"\nCongratulations! You guessed the correct number."<<endl;
            cout<<"Total attempts: "<<attempts<<endl;
            break;}}
    return 0;
}