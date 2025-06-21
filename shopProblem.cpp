#include<iostream>
using namespace std;
int main(){
    int p, pe, e;
    cout<<"price of pencil = ";
    cin>>p;
    cout<<"price of pen = ";
    cin>>pe;
    cout<<"price of eraser = ";
    cin>>e;
    cout<<"total price before gst = "<<(p+pe+e)<<endl;
    cout<<"total price after gst = "<<(p+pe+e)+(p+pe+e)*18/100<<endl;
    return 0;
}