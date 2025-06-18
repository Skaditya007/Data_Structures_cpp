#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10][10], b[10][10], c[10][10];
    int n, m, p;

    cout << "Enter row and column for matrix A(m x n) : ";
    cin >> m >> n;

    cout << "Enter columns for matrix B : ";
    cin >> p;

    cout <<"Enter elements of Array A : ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    cout <<"Enter elements of Array B : ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> b[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout <<"After Multi : ";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            cout << c[i][j] << " " << endl;
        }
    }
    cout << endl;
    return 0;
}