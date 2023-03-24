#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[4];
    for(int i = 0; i<; i++){
        cin>>nums[i];
    }

    for(int i = 0; i<nums.size(); i++){
        for(int j = 0 ; j<=i; j++){
            nums[i] += nums[j];
        }
        cout<<nums;
    }
    
}