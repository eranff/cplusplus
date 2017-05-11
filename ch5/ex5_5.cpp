//
// Created by eran on 5/5/2017.
//

#include<iostream>
#include <cmath>
using namespace std;

void printFactor(int n);

int main(){
    bool cont = true;
    int n;
    while (cont){
        cout << "Please enter a number (0 to exit)" << endl;
        cin >> n;
        if ( n == 0 ){
            cont = false;
            continue;
        }
        printFactor(n);
    }
    return 0;
}

void printFactor(int n){
    double sqrtOfN = sqrt(n);
    for (int i = 2 ; i <= sqrtOfN; ++i){
        if ( n % i == 0 ){
            cout << i << " ";
            printFactor( n / i);
            return;
        }
    }
    cout << n;
}