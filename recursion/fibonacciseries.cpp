#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, first = 0, second = 1, next;
    cout << "Enter Numbers : ";
    cin >> n;
    cout << "Fibonacci Series : ";

    for(int i = 0; i < n; i++){
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}