#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;
    do{
        cout<<"Guess the number between 1 to 100: ";
        scanf("%d", &guess);
        if(guess>number){
            cout<<"Lower number please!\n";
        }
        else if(guess<number){
            cout<<"Higher number please!\n";
        }
        else{
            cout<< "\nYou guessed it in " <<nguesses << " attempts\n";
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}