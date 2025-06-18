#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Size : ";
    cin >> n;

    vector <int> arr(n);
    
    cout <<"Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int item;
    cout << "Enter item u wanna insert : ";
    cin >> item;

    int pos;
    cout << "At which position ? :";
    cin >> pos;

    for(int i = n - 1; i >= pos - 1; i--){
        arr[i+1] = arr[i];
    }

    arr[pos] = item;
    n++;

    cout <<"After insertion : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}