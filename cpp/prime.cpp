#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter num: \n";
    cin>>n;
    bool flag= false;
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            flag=true;
            break;
        }
    } 
  if(flag==false){
 cout<<n<<"  prime.";
 }
 else{
    cout<<"not prime";
 }
    
    
    return 0;
}