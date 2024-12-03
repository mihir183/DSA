#include<iostream>
using namespace std;

int main(){
    int num = 123,temp=0;
    int sum=0;

    while (num>0)
    {
        temp = num%10;
        sum = sum+temp;
        num=num/10;
    }

    cout<<"Sum of 123 Digit is : "<<sum;
    
}