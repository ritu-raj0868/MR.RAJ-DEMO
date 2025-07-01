#include<iostream>
using namespace std;
int largestNumber(int a, int b, int c){
    return (a>b)&&(a>c)?a:(b>c)?b:c;
}
int main(){
    int a = 4, b = 9, c = 24;
    cout<<"largest of Three = "<<largestNumber(a,b,c)<<endl;
    return 0;
}