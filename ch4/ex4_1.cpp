//
// Created by Eran Fishler on 4/27/17.
//

#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    cout << "Please type the first number" << endl;
    cin >> n1;
    cout << "Please type the second number" << endl;
    cin >> n2;
    for (int i = n1; i <= n2; ++i){
        cout << i << " ";
    }
    return 0;
}