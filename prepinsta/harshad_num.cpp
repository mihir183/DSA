#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp=0,no=0;
    cout<<"Enter Number to check number is Harshad or not : ";
    cin>>n;
    no=n;
    while (n>0)
    {
        temp = n%10;
        sum = sum+temp;
        n = n/10;
    }
    cout<<endl;
    // cout<<sum<<endl;
    if(no%sum==0)
    {
        cout<<no<<" is Harshad Number.";
    }
    else{
        cout<<no<<" is not Harshad Number.";
    }
    
}