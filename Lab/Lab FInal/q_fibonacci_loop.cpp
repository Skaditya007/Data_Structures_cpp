#include<bits/stdc++.h>
using namespace std;

int main(){
    int f = 0, s = 1, next;
    int n;
    cin >> n;
    cout << "fib : " << endl;

    for(int i = 0; i < n; i++){
        cout << f << endl;
        next = f + s;
        f = s;
        s = next;
    }
    return 0;
}