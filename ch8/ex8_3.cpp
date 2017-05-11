//
// Created by eran on 5/10/2017.
//

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void convert(char *p);

int main(){
    char str[600];
    cout << "Enter a string" << endl;
    cin.getline(str, 600);
    convert(str);
    cout << str << endl;
    return 0;
}

void convert(char *str){
    int len = sizeof(str);
    for (int i = 0; i < len; ++i){
        str[i] = tolower(str[i]);
    }
}