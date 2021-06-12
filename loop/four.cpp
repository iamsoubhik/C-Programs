#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,sum=0,avg;
    cout<<"Enter the size : ";
    cin>>n;

    for ( i = 0; i <= n; i++)
    {
        cout<<"Enter the number for addition and average : ";
        cin>>i;
        sum+=i;
        avg=sum/n;
    }
    cout<<"========================================"<<endl;
    cout<<"Sum of the numbers are : "<<sum<<endl;
    cout<<"========================================"<<endl;
    cout<<"Average of thye numbers are : "<<avg;

}