//
// Created by Eran Fishler on 4/26/17.
//

#include<iostream>

using namespace std;

int main(){

    int n1, n2;
    cout << "Please enter the first number" << endl;
    cin >> n1;
    cout<< "Please enter the second number" << endl;
    cin >> n2;
    if (n2 < n1 ){
        cout << "The second number has to be bigger than the first";
        return 0;
    }
    while (n1 <= n2){
        if (n1 % 2 ==0 ){
            cout << n1 << " " ;
        }
        n1++;
    }
}