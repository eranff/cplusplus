//
// Created by eran on 5/11/2017.
//

#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char sent[600], *p, trsent[600];
    cout << "Please enter the sentence" << endl;
    cin.getline(sent, 600);
    p = strtok(sent, " ");
    strcpy(trsent,p);
    while ( p != nullptr ){
        cout << p << endl;
        strcat(trsent, "&");
        strcat(trsent, p);
        p = strtok(nullptr, " ");
    }
    cout << trsent << endl;
    return 0;
}