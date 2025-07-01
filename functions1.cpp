#include<iostream>
using namespace std;
    bool isPalindrome(int n){
        int m = n;
        int ans = 0;
        while(n>0){
            int dig = n%10;
            n /= 10;
            ans = ans*10 + dig;
        }
        if(m==ans){
            return true;
        }
        return false;
    }
    int main(){
        int n ;
        cout<<"Enter Number :- ";
        cin>>n;
        if(isPalindrome(n)){
            cout<<"yes "<<endl;
        }else{
            cout<<"no"<<endl;
        }
        return 0;
    }
