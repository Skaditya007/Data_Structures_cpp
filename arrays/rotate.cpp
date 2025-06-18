#include <bits/stdc++.h>
using namespace std;

void rotate_array(vector<int> &arr, int n, int k) {
    while (k--) {
        int temp = arr[0];
        for (int i = 1; i < n; i++) { 
            arr[i - 1] = arr[i]; 
        }
        arr[n - 1] = temp; 
    }
}

int main() {
    int n, k;
    cout << "n & k : ";
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotate_array(arr, n, k); 

    cout << "The rotated array: ";
    for (int num : arr) {
        cout << num << " "; 
    }
    cout << endl;

    return 0;
}