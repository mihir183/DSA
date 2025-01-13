#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector <int> v1(5);

    for (int i = 0; i < 5; i++)
    {
        cout<<"Vector Element : ";
        cin>>v1[i];
    }

    for(int ele:v1)
    {
        cout<<ele<<" ";
    }


    cout<<endl<<"Enter Element for vector 2 : ";
    vector <int> v2;
    int n;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Vector Element : ";
        cin>>n;
        v2.push_back(n);
    }

    for(int ele:v2)
    {
        cout<<ele<<" ";
    }

    cout<<endl;
    //Reverse Vector
    reverse(v1.begin(),v1.end());

    for (int ele : v1)
    {
        cout<<ele<<" ";
    }
    
          
}