#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, arr[20];
  cout<<"Enter the size of the array :";
  cin>>n;

  for(int i=0; i<n; i++)
  {
      cout<<"Enter the number :";
      cin>>arr[i];
  }

  for(int i=n-1;i>=0;i--)
  {
      cout<<arr[i]<<" ";
  }
    

}