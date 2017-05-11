//
// Created by eran on 5/5/2017.
//

#include<iostream>
using namespace std;

void print_out(int n);

int main(){
    int n;
    cout << "Please enter a number" << endl;
    cin >> n;
    print_out(n);
    return 0;
}

void print_out(int n){
    for (int i =1; i <= n; ++i){
        cout << i << " ";
    }
}
