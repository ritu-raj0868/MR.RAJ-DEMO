#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Year :- ";
    cin>>n;
    if(n%4==0){
        cout<<"Given Year is a Leap Year.";
    }else{
        cout<<"Given Year is not a Leap Year.";
    }
    cout<<endl;
    return 0;
}