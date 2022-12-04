#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        int fact =0;
        for(int j=2; j<=sqrt(i); j++)
        {
            if (i%j==0)
            {
               fact++;
               break;
            }
        }
        if (fact==0)
        {
           cout<<i<<" ";
        }
        
    }
    
    return 0;
}