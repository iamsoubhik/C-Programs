#include <bits/stdc++.h>
using namespace std;
int main()  
{  
    char num;  
    
    cout<<"Input any alphabet : ";  
    cin>>num;  
  
    if(num=='a' || num=='e' || num=='i' || num=='o' || num=='u' || num=='A' || num=='E' || num=='I' || num=='O' 

|| num=='U')  
    {  
        cout<<"The alphabet is a vowel.\n";  
    }  
    else if((num>='a' && num<='z') || (num>='A' && num<='Z'))  
    {  
        cout<<"The alphabet is a consonant.\n";  
    }  
    else  
    {  
        cout<<"The character is not an alphabet.\n";  
    }   
}