#include<iostream>
using namespace std;

int main(){ 
    int n;
    cout<< "Enter num:\n";
    cin>> n;
     cout<<"****The Multiplication Table Of " <<n<<" Is**** :"<<endl  ;
    for (int i = 1; i <= 10; i++)
    {
        int mult;
        mult = n*i;
    
     cout<<n<<"*"<<i<<"="<<mult<<endl;
    }
 return 0;   
}
