#include<bits/stdc++.h>
using namespace std;
int main(){
    char num;
    cout<<"Enter the element to check."<<endl;
    cin>>num;
    if(num>='a' && num<='z' || num>='A' && num<='Z')
    {
        cout<<"This is a alphabetic character";
    }
    else if(num>='0' && num<='9')
    {
        cout<<"This is a numerical character";
    }
    else{
        cout<<"This is a special character";
    }
}