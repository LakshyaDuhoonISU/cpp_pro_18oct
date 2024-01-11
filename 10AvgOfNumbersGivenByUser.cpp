//program to calculate average of numbers given by user until they enter 0
#include<iostream>
using namespace std;
int main()
{
    int n=1,sum=0,avg=1,i=1;
    while(n!=0)
    {
        cout<<"Enter a number(0 to exit): ";
        cin>>n;
        sum+=n;
        avg=sum/i;
        cout<<"Average: "<<avg<<endl;
        i++;
    }
    return 0;
}
