//program to check if a number is a prime number
#include<iostream>
using namespace std;
int main()
{
    int n,i=2;bool prime=true;
    cout<<"Enter a number: ";
    cin>>n;
    if (n==0||n==1)
    {
        cout<<n<<" is neither prime nor composite."<<endl;
    }
    else if (n<0)
    {
        cout<<n<<" is invalid."<<endl;
    }
    else
    {
        while(i<=n/2)
        {
            if (n%i==0)
            {
                prime=false;
                break;
            }
            i++;
        }
        if (prime)
        {
            cout<<n<<" is a prime number."<<endl;
        }
        else
        {
            cout<<n<<" is not a prime number."<<endl;
        }
    }
    return 0;
}
