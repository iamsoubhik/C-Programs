#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the size of the numbers : ";
    cin>>n;
    
    for(i=0;i<=n;i++){
        cout<<"Enter the number for sum : ";
        cin>>i;
        sum+=i;
    }
    cout<<"Sum of the numbers are : "<<sum<<endl;
}