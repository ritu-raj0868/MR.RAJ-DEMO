#include<iostream>
using namespace std;

    int main(){
        int n;
        cout<<"Enter a Number :- ";
        cin>>n;
        int fact = 1;
        while(n>0){
            fact *= n;
            n--;
        }
        cout<<"factorial = "<<fact<<endl;
        return 0;
    }
