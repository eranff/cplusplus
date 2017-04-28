//
// Created by Eran Fishler on 4/27/17.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;
    for (int i = n; i > 0; i--){
        cout << i << " ";
    }
    return 0;
}