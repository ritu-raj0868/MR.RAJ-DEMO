#include<iostream>
using namespace std;
char forwardChar(char ch){
    char dh;
    if(ch == 'z'){
        dh = 'a';
    }else if(ch == 'Z'){
        dh = 'A';
    }else{
        dh = ch + 1;
    }
    return dh;
}
int main(){
    char ch;
    cout<<"Enter Character :- ";
    cin>>ch;
    cout<<"After Character :- "<<forwardChar(ch)<<endl;
    return 0;
}