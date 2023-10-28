//program to find largest element in an array using while loop
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
        i++;
    }
    cout<<"Array: |";
    int j=0;
    while(j<n)
    {
        cout<<arr[j]<<" ";
        j++;
    }
    cout<<"|"<<endl;
    int k=0;
    int max=arr[0];
    while (k<n)
    {
        if (arr[k]>max)
        {
            max=arr[k];
        }
        k++;
    }
    cout<<"Largest element: "<<max<<endl;
    return 0;
}