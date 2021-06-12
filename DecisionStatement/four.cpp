#include<bits/stdc++.h>
using namespace std;
int main(){
    int photos;
    int amount;
    cout<<"Enter the number of photo copies ";
    cin>>photos;
    if(photos<10){
        amount=photos*5;
        cout<<"Total price of photos is :"<<amount<<" Rs";
    }else{
        amount=photos*3;
        cout<<"Total price of photos is :"<<amount<<" Rs";
    }
}