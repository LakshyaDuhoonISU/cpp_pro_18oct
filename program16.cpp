//program to write a function to check if prime or not(bool)
#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if (isPrime(a))
    {
        cout<<a<<" is prime."<<endl;
    }
    else
    {
        cout<<a<<" is not prime."<<endl;
    }
    return 0;
}