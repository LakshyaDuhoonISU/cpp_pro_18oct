// program to print prime numbers between 1 to N using do while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 2, j = 2, n, counter = 0;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        j = 2;
        counter = 0;
        do
        {
            if (i == 2)
            {
                break;
            }

            if (i % j == 0)
            {
                counter++;
            }
            j++;
        } 
        while (j <= (i / 2));
        if (counter == 0)
        {
            cout << i << " ";
        }
        i++;
    } 
    while (i <= n);
    return 0;
}
