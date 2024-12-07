#include<iostream>
using namespace std;

int ArmStrong(int n){

    int sum=0,temp=0,rem=0;

    // n = 153
    while (n>0)
    {
        rem = n%10;            //n%10 = 153 % 10 = 3
        temp = rem*rem*rem;    // temp = 3*3*3
        sum = sum +temp;       // sum  = 0 + 27
        n/=10;                // n /= 10 = 15
    }
    

    return sum;
}

int main(){

    int n;

    cout<<"Enter Number : ";
    cin>>n;

    if (n==ArmStrong(n))   
    {
        cout<<n<<" is Armstrong Number.";
    }
    else{
         cout<<n<<" is not Armstrong Number.";
    }
    
}