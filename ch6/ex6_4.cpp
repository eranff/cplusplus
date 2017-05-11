//
// Created by eran on 5/5/2017.
//
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>

using namespace std;

int deck[52];

void shuffle();

int rand0To51();

int main(){
    string suite[4] = {"Spade", "Hurt", "Diamond", "club"};
    string rank[13] = {"two", "three", "four" , "five", "six", "seven", "eight", "nine", "ten", "prince", "queen", "king", "ace"};
    srand(time(nullptr));
    for (int i =0; i < 52; ++i){
        deck[i] = i;
    }
    int card = rand0To51();
    cout << rank[card % 13] << " " << suite[card % 4];
    return 0;
}

int rand0To51(){
    return rand() % 52;
}
