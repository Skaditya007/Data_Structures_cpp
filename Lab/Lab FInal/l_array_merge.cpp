#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[100], b[100], c[100];
    int n1, n2;
    
    cout <<"Enter size of 1st array : ";
    cin >> n1;
    cout <<"Enter elements of 1st array : ";
    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }

    cout <<"Enter size of 2nd array : ";
    cin >> n2;
    cout <<"Enter elements of 2nd array : ";
    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }

    while(i < n1){
        c[k++] = a[i++];
    }
    while(j < n2){
        c[k++] = b[j++];
    }

    cout <<"After merge : ";
    for(int i = 0; i < k; i++){
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}