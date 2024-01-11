//program to write a function to perform addition
#include<iostream>
using namespace std;

int addition(int a,int b)
{
    cout<<"Sum: "<<a+b<<endl;
    return 0;
}

int main()
{
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    addition(x,y);
    return 0;
}
