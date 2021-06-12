#include<bits/stdc++.h>
using namespace std;
int main(){
    int math,phy,che,total,mathphy;
    cout<<"Enter the marks obtained by the students :";
    cin>>math>>phy>>che;
    total=math+phy+che;
    mathphy=math+phy;
    if(math>=65 && phy>=55 && che>=50){
        if(total>=190 && mathphy>=140){
            cout<<"The student is eligible ";
        }
    }else{
        cout<<"Total marks of the student is = "<< total <<" So, The student is not eligible because of math and physics";
    }
}