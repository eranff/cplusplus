//
// Created by Eran Fishler on 4/27/17.
//
#include <iostream>

using namespace std;

int main(){
    double sum = 0, num;
    do {
        cout << "Please enter a number (0.0 to exit)" << endl;
        cin >> num;
        sum += num;
    } while ( num != 0.0);
    cout << "The sum is " << sum << endl;
    return 0;
}
