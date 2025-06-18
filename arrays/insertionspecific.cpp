#include<iostream>
using namespace std;
int main(){
    int n,x,pos;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The element to insert : ";
    cin>>x;
    cout<<"Enter Position : ";
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    n++;
    cout<<"Final Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}