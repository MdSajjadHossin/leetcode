#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>&arr){
        sort(arr.begin(), arr.end());
        return arr[arr.size() -1];
    }


int findTheLargetsValue(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
    }
}
return max;
}


int main()
{
    // vector<int>arr1 = {1, 8, 7, 56, 90};
    // vector<int>arr2 = {1, 2, 0, 3, 2, 4, 5};

    // cout<<sortArr(arr1)<<endl;


    int arr3[]={1, 8, 7, 56, 90};
    int n = 5;
    int max = findTheLargetsValue(arr3, n);
    cout<<max<<endl;
    
}