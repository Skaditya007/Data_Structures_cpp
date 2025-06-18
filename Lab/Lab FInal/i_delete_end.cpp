#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Size : ";
    cin >> n;

    vector <int> arr(n);

    cout <<"Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int pos;
    cout << "Enter position : ";
    cin >> pos;

    for(int i = pos - 1; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    pos--;
    n--;

    cout <<"After deletion : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}