//
// Created by Eran Fishler on 4/26/17.
//

#include <iostream>

using namespace std;

int main(){
    double ftemp, ctemp;
    cout << "Enter a tempreature in Frenhight" << endl;
    cin >> ftemp;
    ctemp = (ftemp - 32)/ 1.8;
    cout << "The tempreature in Cel: " << ctemp;
    return 0;

}

