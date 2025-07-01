#include<iostream>
using namespace std;
int sumOfDigits(int n){
    int sum = 0;
    while(n>0){
        int dig = n%10;
        n /= 10;
        sum += dig;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    cout<<" Sum Of Digits = "<<sumOfDigits(n)<<endl;
    return 0;
}