#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
   
   for(int m=2; m<=n; m++){
     bool isPrime = true;
     for(int i=2; i*i<=m; i++){
        if(m%i==0){
            isPrime = false;
        }
      }
      if(isPrime){
        cout<<m<<",";
      }
    }
    cout<<endl;
    return 0;
    
}