#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    if(n==0){
        cout<<"Given Number is Zero.";
    }else if(n<0){
        cout<<"Given Number is Negative.";
    }else{
        cout<<"Given Number is Positive";
    }
    cout<<endl;
    return 0;
}