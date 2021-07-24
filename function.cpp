#include <iostream>
using namespace std;

bool prime(int n);

int main() 
{
    signed int n;
    int i;
    bool num = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 2; i <= n/2;i++)
    {
        if (prime(i))
        {
            if (prime(n - i)) 
            {
                cout << n << " = " << i << " + " << n-i << endl;
                num = 1;
            }
        }
    }

    if (!num)
      cout << n << " !! cannot be  expressed as sum of two prime numbers.";

    return 0;
}
bool prime(int n)
{
    int i;
    bool ifprime = 1;
    if (n == 0 || n == 1)
    {
        ifprime = 0;
    }
    else
    {
        for(i = 2; i <= n/2; ++i) 
        {
            if(n % i == 0) 
            {
                ifprime = 0;
                break;
            }
        }
    }

    return ifprime;
}
