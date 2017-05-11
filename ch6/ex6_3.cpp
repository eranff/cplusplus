//
// Created by eran on 5/5/2017.
//

#include<iostream>
#include<cstdlib>
#include<ctime>

#define VALUES 5

using namespace std;

int rand0ToN(int n);

int main(){
    int arr[VALUES];
    srand(time(nullptr));
    for (int i = 0; i < VALUES; ++i){
        arr[i] = 0;
    }
    for (int i = 0; i < 20000; ++i){
        ++arr[rand0ToN(VALUES)];
    }
    for (int i = 0; i < VALUES; ++i){
        cout << "i: " << arr[i] << " " << arr[i] / (20000.0/ VALUES) << endl;
    }
    return 0;
}

int rand0ToN(int n){
    return rand() % n;
}

