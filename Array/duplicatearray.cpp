#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100],i,j,count=0,n;
    cout<<"Enter the size of the array :";
    cin>>n;

    for(int i=0;i<n; i++)
    {
        cout<<"Enter the array"<<i<< " " ;
        cin>>arr[i];
    }

    //find all duplicate elements in the array

    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }

    cout<<"Total no of Duplicate elements are "<<count;
    return 0;
}