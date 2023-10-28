//program to print name infinitely using while loop
#include<iostream>
using namespace std;
int main()
{
    string i;
    cout<<"Enter your name: ";
    getline(cin,i);
    while(true)
    {
        cout<<i;
    }
    return 0;
}