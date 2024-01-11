//program to ask user for password and display appropriate message using while loop
#include<iostream>
using namespace std;
int main()
{
    string password="123@password";
    cout<<"Enter password: ";
    string password2;
    cin>>password2;
    while(password2!=password)
    {
        cout<<"Incorrect password."<<endl<<"Enter password again: ";
        cin>>password2;
    }
    cout<<"Correct password."<<endl;
    return 0;
}
