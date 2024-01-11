//program to print fibonacci sequence upto 10 terms using a while loop
#include<iostream>
using namespace std;
int main()
{
    int i=0,t1=0,t2=1,nt;
    cout<<t1<<" "<<t2<<" ";
    while(i<8)
    { 
        nt=t1+t2;
        t1=t2;
        t2=nt;
        cout<<nt<<" ";
        i++; 
    }
}
