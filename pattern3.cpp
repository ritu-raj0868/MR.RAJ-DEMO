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
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        if(i!=0){
            for(int j=2; j<=i+1; j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}