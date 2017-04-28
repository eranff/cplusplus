//
// Created by Eran Fishler on 4/27/17.
//
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    int number;
    int guess;
    srand(time(nullptr));
    number = rand() % 50 + 1;
    while (true){
        cout << "Please enter your guess" << endl;
        cin >> guess;
        if ( guess == 0){
            cout << "Bye";
            break;
        } else if ( guess < number ){
            cout << "Your guess is too low" << endl;
        } else if ( guess > number ){
            cout << "Your guess is too high" << endl;
        } else {
            cout << "You are correct " << endl;
            cout << "The number is " << number << endl;
            break;
        }

    }

    return 0;
}
