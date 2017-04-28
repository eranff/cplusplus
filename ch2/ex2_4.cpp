//
// Created by Eran Fishler on 4/26/17.
//

#include <iostream>

using namespace std;

int main(){
    int number;
    cout << "Please enter a number" << endl;
    cin >> number;
    if (number >= 0 && number <= 100){
        cout << "The number entered is in the 0 - 100 range";
    } else {
        cout << "The number entered is not in the 0 - 100 range.";
    }
    return 0;
}