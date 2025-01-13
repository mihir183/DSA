#include <iostream>
using namespace std;
int main()
{
    
    int n = 6;
    int arr[n] = {1, 2, 4, 5, 6};

    // for(int i = 0;i < n ;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    cout << "Enter Value to insert in array : "; // Which value insert 
    int v;
    cin >> v;

    cout << "Enter Position of array : ";
    int p;
    cin >> p;

    if (p < n) //IF Position 
    {
        for (int i = n; i >= p-1; i--)
        {
            arr[i] = arr[i-1];
            if(i==p-1)
            {
                arr[i] = v;
            }
        }
    }
    else{
        cout<<"Enter value in "<<n;
    }

    cout<<endl<<"Output :";

    for(int i = 0;i < n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}