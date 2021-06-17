//Write a program in C to make such a pattern like right angle triangle with number increased by 1.
// The pattern is as follows :

//    1
//    2 3
//    4 5 6
//    7 8 9 10

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,row,k=1;
    cout<<"Enter the row number : ";
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)
            cout<<k++;
            cout<<"\n";
        
    }
}