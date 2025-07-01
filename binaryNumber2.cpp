#include<iostream>
using namespace std;
int binToDec(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int lastDig = n%10;
        n /= 10;
        ans += (lastDig*pow);
        pow *= 2;
    }
    return ans;
}
int main(){
     int n;
    cout<<"Enter binary Number = ";
    cin>>n;
    cout<<"Decimal Number = "<<binToDec(n)<<endl;
    return 0;
}