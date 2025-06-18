#include<iostream>
using namespace std;

int ln(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {1,2,3,4,8};
    int n=5;
    int target =8;
    cout<< ln(arr,n,target)<< endl;
    return 0;
}

