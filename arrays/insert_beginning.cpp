#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The element to insert at begining : ";
    cin>>x;
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=x;
    n++;
    cout<<"Final Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
