//
// Created by eran on 5/5/2017.
//

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int rand1ToN(int n);

int main(){
    int cnt;
    srand(time(nullptr));
    cout << "How many dice to roll" << endl;
    cin >> cnt;
    for (int i = 1; i <= cnt; ++i){
        cout << rand1ToN(6) << " ";
    }
    return 0;
}

int rand1ToN(int n){
    return 1 + rand() % 6;

}