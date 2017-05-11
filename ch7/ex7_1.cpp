//
// Created by eran on 5/8/2017.
//
#include <iostream>

using namespace std;

void tripple_it(int *p);

int main(){
    int a = 6;
    cout << "The value before trippling is: " << a << endl;
    tripple_it(&a);
    cout << "The value after trippling is: " << a << endl;
    return 0;
}

void tripple_it(int *p){
    *p = *p * 3;
    cout << *p << endl;
    cout << p << endl;
}
