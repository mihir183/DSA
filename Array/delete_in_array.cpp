#include<iostream>
using namespace std;
int main(){
    int n=10;
    int arr[n]= {1,10,2,3,4,5};

    int p;
    cout<<"Enter Postion to Delete Element of Array : ";//Delete
    cin>>p;

    if(p<n)
    {
        for (int i = p; i < n; i++)
        {
            arr[i] = arr[i+1];
        }
        
    }

    int l = sizeof(arr)/sizeof(arr[0]);

    cout<<l;
    cout<<"OUTPUT : ";
    for (int i = 0; i < l; i++)
    {
        if(arr[i]==0)
        {
            break;
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }  
}
