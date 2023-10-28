//program to calculate factorial of a number using while loop
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial: "<<fact<<endl;
    return 0;
}