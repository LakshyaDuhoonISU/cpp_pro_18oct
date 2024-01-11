//program to calculate factorial of a number using recursion
#include<iostream>
using namespace std;

int factorial(int a)
{
    if (a==0||a==1)
    {
        return 1;
    }
    else
    {
        return a*factorial(a-1);
    }
}

int main()
{
    int n,c;
    cout<<"Enter a number: ";
    cin>>n;
    if (n<0)
    {
        cout<<"Invalid number.";
    }
    else
    {
        c=factorial(n);
        cout<<"Factorial of "<<n<<" is: "<<c<<endl;
    }
    return 0;
}
