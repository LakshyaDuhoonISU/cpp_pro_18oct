//program to reverse a string using function
#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{
    int start=0,end=str.length()-1;
    while(start<end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    return str;
}

int main()
{
    string str1,s;
    cout<<"Enter a string: ";
    cin>>str1;
    s=reverse(str1);
    cout<<s<<endl;
    return 0;
}
