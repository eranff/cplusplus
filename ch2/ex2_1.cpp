//
// Created by Eran Fishler on 4/26/17.
//
#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Please enter a number" << endl;
    cin >> number;
    if (number % 7 == 0 ){
        cout << "The number is dvisable by 7";
    } else {
        cout << "The number is not divsable by 7";
    }
}
