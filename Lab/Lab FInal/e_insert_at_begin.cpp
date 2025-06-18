#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Size : ";
    cin >> n;

    vector <int> arr(n);

    cout <<"Enter elements :";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int item;
    cout << "Enter item u wanna insert : ";
    cin >> item;

    for(int i = n - 1; i >=0; i--){
        arr[i + 1] = arr[i]; //right shift
    }

    arr[0] = item;
    n++;
    
    cout <<"After insertion :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}