#include<bits/stdc++.h>
using namespace std;
int main(){
    int age , weight ;
    cout<<"Enter the age and the weight :";
    cin>>age>>weight;
    if(age>18 && age<55 && weight<45){
        cout<<"You are eligible for blood donation ";
    }else{
        cout<<"You are not eligible for blood donation ";
    }
}