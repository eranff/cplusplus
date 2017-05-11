//
// Created by eran on 5/10/2017.
//

#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(){
    char nums[600];
    while (true){
        cout << "Please enter a number" << endl;
        cin.getline(nums, 600);
        if (strlen(nums) == 1 && nums[0] == '0'){
            break;
        }
        int tmp = atoi(nums);
        cout << sqrt(tmp) << endl;
    }
    return 0;
}