#include<bits/stdc++.h>
using namespace std;
int main(){
    int name,rollno,phy,chem,math,total,percentage,division;
    cout<<"Enter the name of the student"<<endl;
    cin>>name;
    cout<<"Enter the roll number of the student"<<endl;
    cin>>rollno;
    cout<<"Enter the marks "<<endl;
    cin>>phy>>chem>>math;
    total=math+chem+phy;
    percentage=total/3;
    if(percentage>80){
        cout<<"You are outstanding percentage";
    }
    else if(percentage<90 && percentage >80){
        cout<<"You are First class";
    }
    else{
        cout<<"You are pass";
    }
    cout<<name;
    cout<<rollno;
    cout<<phy;
    cout<<chem;
    cout<<total;
    cout<<percentage;
    return 0;

}