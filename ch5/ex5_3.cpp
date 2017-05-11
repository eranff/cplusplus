//
// Created by eran on 5/5/2017.
//
#include <iostream>
#include<cmath>
using namespace std;

void isPrime(int n);

int main(){
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;
    isPrime(n);
    return 0;
}

void isPrime(int n){
    double sqrtOfN = sqrt(n);
    bool prime =  true;
    for (int i = 2; i <= sqrtOfN; ++i){
        if ( n % i == 0 ){
            prime = false;
            break;
        }
    }
    if (prime){
        cout << "The number " << n << " is prime";
    } else {
        cout << "The number " << n << " is not prime";
    }
}
