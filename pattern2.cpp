#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :- ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"  ";
        }
        for(int j=n-i; j<n+n-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}