//
// Created by eran on 5/8/2017.
//

#include<iostream>

using namespace std;

void convert_temp(double *temp);

int main(){
    double temp=25;
    cout << "Temptreature to convert is: " << temp << endl;
    convert_temp(&temp);
    cout << "Tempreature is F " << temp << endl;
    return 0;
}

void convert_temp(double *temp){
    *temp = 32 + 1.8**temp;
}