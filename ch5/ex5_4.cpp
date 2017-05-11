//
// Created by eran on 5/5/2017.
//
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n);

int main(){
    int n;
    cout << " Please enter a number" << endl;
    cin >> n;
    n++;
    while (!isPrime(n)){
        ++n;
    }
    cout << n << " Is the first primt after the number you entered.";
    return 0;
}

bool isPrime(int n){
    double sqrtOfN = sqrt(n);
    bool prime  = true;
    for (int i = 2; i <= sqrtOfN; ++i){
        if (n % i == 0 ){
            prime = false;
            break;
        }
    }
    return prime;
}
