//
// Created by eran on 5/11/2017.
//

#include<iostream>
#include<cstring>

using namespace std;

void convert(char *str);

int main(){

    char str[600];
    cout << "Please enter a string" << endl;
    cin.getline(str, 600);
    convert(str);
    cout << str << endl;
    return 0;
}

void convert(char *str){
    int tmp = sizeof(str);
    while (tmp-- > 0){
        *str = tolower(*str);
        ++str;
    }
}