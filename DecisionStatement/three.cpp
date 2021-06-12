#include <bits/stdc++.h>
using namespace std;
int main(){
    int page;
    int price;
    cout<<"Enter the page number :";
    cin>>page;
    if(page<50)
    {
        price=(3*page);
        cout<<"Your total typing price is :"<<price;
    }else{
        price=5+(3*(page-1));
        cout<<"Your total printing price is :"<<price;
    }
}