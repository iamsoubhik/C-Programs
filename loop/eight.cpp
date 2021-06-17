#include<bits/stdc++.h>
using namespace std;
main(){
    int i,n,sum=0;

   cout<<"Input number of terms : ";
   cin>>n;;
   cout<<"The odd numbers are :";
   for(i=1;i<=n;i++)
   {
     cout<<2*i-1;
     sum+=2*i-1;
   }
   cout<<"\nThe Sum of odd Natural Number upto %d terms  : "<<n<<sum<<endl;
}
