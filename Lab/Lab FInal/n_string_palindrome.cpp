#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s1, string s2){
    
    for(int i = s1.size() - 1; i >= 0; i--){
        s2[i] += s1[i];
        }
        return s1 == s2 ;      
    }


int main(){
    string s1, s2;
    cin >> s1;

    if(isPalindrome(s1, s2)){
        cout << "Yes" << endl;
    }else{
        cout <<"Noooooo" << endl;
    }
}