#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,table;
    cout<<"Which table you want :";
    cin>>n;

    for(i=1;i<=10;i++){
        table = n*i;
        cout<<"Table of "<<n<<"*"<<i<<"= "<<table<<endl;
        cout<<"-----------------------------"<<endl;
    }

}