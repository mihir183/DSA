#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){

    string s1="Mihir",s2="Vaghela";

    cout<<s1 + " " + s2<<endl;

    cout<<s1.append(s2)<<endl;


    // USE IN C

    char str1[6] = "Mihir";
    char str2[8] = " Sanhir";

    cout<<strcat(str1,str2)<<endl;

    printf("RNW");
    // gets(s1);
}