#include<iostream>
using namespace std;
int wholeSquare(int a, int b){
    int ans = (a*a)+(b*b)+(2*a*b);
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter first number :- ";
    cin>>n;
    cout<<"Enter Second number :- ";
    cin>>m;
    cout<<"("<<n<<" + "<<m<<")^2 = "<<wholeSquare(n,m)<<endl;
    return 0;
}