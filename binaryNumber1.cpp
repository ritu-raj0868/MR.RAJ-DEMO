#include<iostream>
using namespace std;
int decToBin(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int lastDig = n%2;
        n /= 2;
        ans = ans + (lastDig*pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter Decimal Number = ";
    cin>>n;
    cout<<"Binary Number = "<<decToBin(n)<<endl;
    return 0;
}