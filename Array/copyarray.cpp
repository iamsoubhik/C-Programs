#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr1[10],arr2[10];
    cout<<"Enter the size of array :";
    cin>>n;

    for(int i=0;i<n; i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr2[i];
    }
}