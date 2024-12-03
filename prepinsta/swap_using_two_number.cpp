#include<iostream>
using namespace std;

int swap_using_two(int a,int b){

    a=a+b; // a = 4+5 = 9
    b=a-b; // b = 9-5 = 4
    a=a-b; // a = 9-4 = 5

    cout<<"After Swap A : "<<a<<" and B : "<<b<<endl;
}

int main(){

    int a,b;

    cout<<"Enter First Number : ";
    cin>>a;

    cout<<"Enter First Number : ";
    cin>>b;

    cout<<"Before Swap A : "<<a<<" and B : "<<b<<endl;

    swap_using_two(a,b);
    
}