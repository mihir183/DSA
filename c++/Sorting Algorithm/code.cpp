#include<iostream>
using namespace std;

void InsertData(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i+1<<" element in Array: ";
        cin>>arr[i];
    }
    
}

void DisplayData(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void BubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
    
}

void SelectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int si=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[si])
            {
                si=j;
            }
            
        }
        swap(arr[i],arr[si]);
    }
    
}

void InsertionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       
    }
    
}


int main(){

    int n;
    cout<<"Enter the number you want size of Array : ";
    cin>>n;
    int arr[n];

    InsertData(arr,n);
    DisplayData(arr,n);

    int ch;
    cout<<endl<<endl;
    cout<<"1 : Buuble Sort"<<endl;
    cout<<"2 : Selection Sort"<<endl;
    cout<<"3 : Insertion Sort"<<endl;
    cout<<"Enter No for Which Sorting Method you use : ";
    cin>>ch;

    switch (ch)
    {
    case 1:
        BubbleSort(arr,n);
        cout<<endl<<"Aftre Bubble Sort Apply : ";
        DisplayData(arr,n);
        break;
    case 2:
        SelectionSort(arr,n);
        cout<<endl<<"After Selection Sort Aplly : ";
        DisplayData(arr,n);
        break;
    case 3:
        InsertionSort(arr,n);
        cout<<endl<<"After InsertIon Sort Aplly : ";
        DisplayData(arr,n);
        break;
    
    default:
        cout<<"Invalid Choice.....";
        break;
    }

    
}