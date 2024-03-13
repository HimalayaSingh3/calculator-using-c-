#include<iostream>
using namespace std;
int main(){
    char n;
    float a,b;   
    cout<<"Enter No 1=";
    cin>>a;
    cout<<"Enter No 2=";
    cin>>b;
    cout<<"1./"<<endl;
    cout<<"2.*"<<endl;
    cout<<"3.+"<<endl;
    cout<<"4.-"<<endl;
    cout<<"Choose Expression 1 to 4=";
    cin>>n;
    switch(n){
        case '/':
          cout<<a<<"/"<<b<<"="<<a/b<<endl;break;
        case '*':
          cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
        case '+':
          cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
        case '-':
          cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
}
    return 0;
}
