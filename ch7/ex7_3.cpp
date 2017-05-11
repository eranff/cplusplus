//
// Created by eran on 5/8/2017.
//

#include<iostream>
using namespace std;

void sort(int n);
void swap(int *n1, int *n2);

int arr[5];

int main(){
    for (int i = 0; i < 5; ++i){
        cout << "Please enter a number" << endl;
        cin >> arr[i];
    }
    sort(5);
    for (int i = 0; i < 5; ++i){
        cout << arr[i] << endl;
    }
    return 0;
}

void sort(int n){
    for (int i = 0; i < (n -1); ++ i){
        for (int j = i+1; j < n; ++j){
            if (arr[j] > arr[i]){
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}