//
// Created by Eran Fishler on 4/27/17.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, n;
    double sqrtN;
    bool prime = true;
    cout << "Please enter a number" << endl;
    cin >> n;
    sqrtN = sqrt(n);
    i = 2;
    while (i <= sqrtN){
        if ( n % i == 0 ){
            prime = false;
            break;
        }
        i++;
    }
    if ( prime ){
        cout << "The number " << n << " is prime" << endl;
    } else {
        cout << "The number " << n << " is not prime" << endl;
    }
}