#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10];
    int m,n,p;
    cout<<"Enter the number of rows and columns for Matrix A (m x n) : ";
    cin>>m>>n;
    cout<<"Enter the columns for matrix B (n x p) : ";
    cin>>p;

    cout<<"Enter the elements of Matrix A : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of Matrix B : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k] * b[i][k];
            }
        }
    }
    cout << "The result of matrix multiplication is:" << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;    
}