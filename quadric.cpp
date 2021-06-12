//wap to perform a quadric equations
#include<bits/stdc++.h>
using namespace std;
main(){
    int a,b,c;
    float x1,x2;
    cout<<"Enter the values for a b and c";
    cin>>a>>b>>c;
    if(b*b>4*a*c){
        x1=-b+sqrt(b*b-4*a*c)/2*a;
        x1=-b-sqrt(b*b-4*a*c)/2*a;
        cout<<x1<<x2;
    }
    else{
        cout<<"Roots are imaginary ";
    }
}