//program to simulate a simple guessing game using while loop
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;//a=43;
    int random = 1 + (rand() % 100);
    cout<<random<<endl;
    cout<<"Guess the number: ";
    cin>>n;
    while(n!=random)
    {
        cout<<"Incorrect number! ";
        if (n>random)
        {
            cout<<"Your guess is higher than the number"<<endl;
        }
        else
        {
            cout<<"Your guess is lower than the number"<<endl;
        }
        cout<<"Guess again: ";
        cin>>n;
    }
    cout<<"Your guess is correct! "<<endl;
    return 0;
}