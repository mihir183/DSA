#include<iostream>
using namespace std;

int swap_using_three(int a,int b){

    int t=0;

    t=a;
    a=b;
    b=t;

    cout<<"After Swap A : "<<a<<" and B : "<<b<<endl;
}

int main(){

    int a,b;

    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter First Number : ";
    cin>>b;

    cout<<"After Swap A : "<<a<<" and B : "<<b<<endl;

    swap_using_three(a,b);
    
}