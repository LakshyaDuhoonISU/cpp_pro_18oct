//program to check if a string is a palindrome or not
#include<iostream>
using namespace std;

bool palindrome(string str)
{
    int end=str.length();
    bool palin=true;
    for (int i=0;i<end/2;i++)
    {
        if (str[i]!=str[end-1-i])
        {
            palin=false;
        }
    }
    if (palin)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str1;
    cout<<"Enter a string: ";
    cin >> str1;
    if (palindrome(str1))
    {
        cout<<"String is a palindrome."<<endl;
    }
    else
    {
        cout<<"String is not a palindrome."<<endl;
    }
    return 0;
}