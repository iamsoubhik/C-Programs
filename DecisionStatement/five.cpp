#include<bits/stdc++.h>
using namespace std;
int main(){
    float time ,price;
    cout<<"Enter time to brows internet :";
    cin>>time;
    if(time==1){
        price=time*20;
        cout<<"Your ammount is"<<price<<" Rs";
    }
    if(time==1/2){
        cout<<"Your ammount is"<<"10"<<" Rs";
    }
    if(time=24){
        cout<<"Your ammount is"<<"90"<<" Rs";
    }else{
        cout<<"You entered wrong time limit"<<" Type again";
    }
}

