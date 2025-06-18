#include<iostream>
using namespace std;
int main(){
    int n,x,i;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The element to insert at end : ";
    cin>>x;
    arr[i]=x;
    n++;
    cout<<"Final Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}