#include<iostream>
using namespace std;

int reverse(int n){

    int rev=0,temp;

    while (n>0)
    {
        temp = n%10;
        rev =  rev * 10 + temp;
        n = n/10;

        //Also Write in this way
        // rev =  rev * 10 + (n%10); 
        // n = n/10;

    }

    return rev;
    
}

int main(){

    int n;

    cout<<"Enter Number : ";
    cin>>n;

    cout<<n<<" reverse is : "<<reverse(n);
}