//
// Created by eran on 5/5/2017.
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

double rand0To1();

int main(){
    int cnt;
    srand(time(nullptr));
    cout << "How many time to roll the dice" << endl;
    cin >> cnt;
    for (int i = 1; i <= cnt; ++i){
        cout << rand0To1() << " ";
    }
    return 0;
}

double rand0To1(){
    return ((double) rand())/RAND_MAX;
}
