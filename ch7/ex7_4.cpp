//
// Created by eran on 5/8/2017.
//

#include <iostream>
using namespace std;

int main(){
    int a[5] = {2,5,4,3,1};
    int n = 5;
    int *p = a;
    while ( n-- > 0){
        cout << *p << endl;
        ++p;
    }
    return 0;
}