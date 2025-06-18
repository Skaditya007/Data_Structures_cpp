#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10][10], b[10][10], c[10][10];
    int m, n;

    cout <<"Enter row and column for Matrix A  & B(m x n) : ";
    cin >> m >> n;

    cout <<"Enter elements of A : ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    
    cout <<"Enter elements of B : ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "After sum : ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}