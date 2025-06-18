#include<bits/stdc++.h>
using namespace std;

int ls(vector <int> &arr, int n, int item){
    for(int i = 0; i < n; i++){
        if(arr[i] == item){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    int item;
    cin >> item;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = ls(arr, n, item);

    if(result == -1){
        cout << "Not Found : " << endl;
    }else{
        cout << "Found at index : " << result << endl;
    }
}