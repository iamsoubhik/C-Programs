#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,num;
    cout<<"Enter the size of the table :";

    cin>>num;

    for(i=1;i<=10;i++){
        for(j=1;j<=num;j++){
            cout<<i<<" x "<<j<<" "<<i*j<<endl;
        }
    }
}