#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout <<"Size :";
    cin >> n;

    vector <int> arr(n);
    
    cout <<"Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int item;
    cout << "Enter item u wanna insert : ";
    cin >> item;

    arr[n] = item;
    n++;

    cout <<"After insertion : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}