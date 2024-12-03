#include<iostream>
using namespace std;

int reverse(int n){

    int rev=0,temp;

    while (n>0)
    {
        temp = n%10;
        rev =  rev * 10 + temp;
        n = n/10;

    }

    return rev;
    
}

int main(){

    int n;

    cout<<"Enter Number : ";
    cin>>n;

    int rev = reverse(n);

    if (n==rev)
    {
        cout<<n<<" is Palindrome Number..!";
    }
    else{
        cout<<n<<" is not Palindrome Number..!";
    }
    
}

//Armstrong number