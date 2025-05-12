#include<iostream>
using namespace std;
int main(){
    float a,b,result;
    char x;
    cout<<"ENTER YOUR FIRST NUMBER:-"<<std::endl;
    cin>>a;
    cout<<"ENTER YOUR OPRATERS NUMBER:-"<<std::endl;
    cin>>x;
    cout<<"ENTER YOUR SECOND NUMBER:-"<<std::endl;
    cin>>b;
    switch(x){
        case'+':
        result=a+b;
        cout<<"Sum of "<< a <<" and "<< b <<" = "<<result;
        break;
        case'-':
        result=a-b;
        cout<<"Sub of "<< a <<" and "<< b <<" = "<<result;
        break;
        case'*':
        result=a*b;
        cout<<"Multi of "<< a <<" and "<< b <<" = "<<result;
        break;
        case'/':
        result=a/b;
        cout<<"Divide of "<< a <<" and "<< b <<" = "<<result;
        break;
    }
    return 0;
}