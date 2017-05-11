//
// Created by eran on 5/10/2017.
//

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char name[100];
    char addr[200];
    char age[25];
    char str[600];

    cout << "Please enter your name" << endl;
    cin.getline(name, 100);
    cout << "Please enter your address" << endl;
    cin.getline(addr, 100);
    cout << "Please enter your age" << endl;
    cin.getline(age, 25);

    strcpy(str, name);
    strcat(str, " ");
    strcat(str, addr);
    strcat(str, " ");
    strcat(str, age);
    cout << str << endl;
}