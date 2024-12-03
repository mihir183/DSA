#include<iostream>
using namespace std;
int main(){
    int a=10;
    cout<<"Before A : "<<a<<endl;

    a++;
    cout<<"After Post Increment A : "<<a<<endl;

    a++;
    cout<<"After Pre Increment A : "<<a<<endl;

    int r = a++ + ++a;
    cout<<"Result : "<<r<<endl;

    
}