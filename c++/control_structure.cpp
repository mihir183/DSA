//Grading System
#include<iostream>
using namespace std;
int main(){
    int marks;

    cout<<"Enter No : ";
    cin>>marks;

    if(marks>100){
        cout<<"Enter Valid Number.....!";
    }
    else if (marks>90 && marks<=100)
    {
        cout<<"Weldone you got Grade A.";
    }
    else if (marks>80 && marks<=90)
    {
        cout<<"Great you got Grade B.";
    }
    else if (marks>70 && marks<=80)
    {
        cout<<"Nice you got Grade C.";
    }
    else if (marks>60 && marks<=70)
    {
        cout<<"you got Grade D.";
    }
    else if (marks>50)
    {
        cout<<"you got Grade E.";
    }
    else{
        cout<<"You got grade F.";
    }
    
}