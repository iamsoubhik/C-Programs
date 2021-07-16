//factorial of anumber in c++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,number,fact=1;
    cout<<"Enther the number for factorial : ";
    cin>>number;
    for(i=1;i<=number;i++){
        fact=i*fact;
    }
    cout<<"Factorial of the number is : "<<fact<<endl;
}