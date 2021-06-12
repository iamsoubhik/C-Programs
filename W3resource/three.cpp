#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year to check";
    cin>>year;
    if(year%4==0){
        cout<<"Leap year";
    }
    else if(year%400==0){
        cout<<"Leap year";
    }
    else if(year%100==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not Leap year";
    }
}