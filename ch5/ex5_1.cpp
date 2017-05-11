//
// Created by eran on 5/5/2017.
//

#include <iostream>

using namespace std;

int factorial(int n);

int main(){
    int n;
    cout << "Please enter a number " << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n);
    return 0;
}

int factorial(int n){
    int factorial = 1;
    for (int i = 1; i <= n; ++i){
        factorial *= i;
    }
    return factorial;
}