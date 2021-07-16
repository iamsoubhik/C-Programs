//Write a program in C to find the sum of all elements of the array. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,arr[10],sum=0;
    cout<<"Enter the size of array :";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i<<" number :";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of the array are : "<<sum;


}
