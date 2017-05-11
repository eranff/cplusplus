//
// Created by eran on 5/5/2017.
//

#include<iostream>

using namespace std;

int main(){
    int arr[4];
    for (int i = 0; i < 4; ++i){
        cout << "Please enter a number" << endl;
        cin >> arr[i];
    }
    cout << "Thank you" << endl;
    for ( int i = 0; i < 4; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}