#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number = ";
    cin>>n;
    int m = n;
    int arm = 0;
    while(n>0){
        int lastDig = n%10;
        n /= 10;
        arm += (lastDig*lastDig*lastDig);
    }
    if(arm == m){
        cout<<m<<" is Armstrong Number.";
    }else{
        cout<<m<<" is not a Armstrong Number.";
    }
    cout<<endl;
    return 0;
}