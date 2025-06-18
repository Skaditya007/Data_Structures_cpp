#include<bits/stdc++.h>
using namespace std;

int bs(vector <int> &arr, int low, int high, int item){
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == item){
            return mid;
        }else if(item > arr[mid]){
            low = mid + 1;
        }else if(item < arr[mid]){
            high = mid - 1;
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

    int result = bs(arr, 0, n-1, item);

    if(result == -1){
        cout << "Not found!" << endl;
    }else{
        cout << "Found at idx : " << result << endl;
    }
    return 0;
}