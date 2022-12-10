#include<iostream>
using namespace std;
void print(int num1,int num2){
    cout<<"num1= "<<num1<<endl;
    cout<<"num2= "<<num2<<endl;
}
int add(int num1, int num2){
    print(num1,num2);
    int sum = num1 + num2;
    return sum; 
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum of given two numbers is: "<<add(a,b)<<endl;
    return 0;
}