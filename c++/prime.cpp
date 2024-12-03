#include<iostream>
using namespace std;
int main(){
    int n;
    int flag=0;
    cout<<"Enter No : ";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    

    if(flag==0){
        cout<<n<<" is Prime Number";
    }
    else{
        cout<<n<<" is not Prime Number";
    }
}