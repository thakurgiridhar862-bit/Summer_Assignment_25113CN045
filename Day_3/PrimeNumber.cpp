#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number you want to check :";
    cin >> n;
    if (n > 1)
    {
        bool isprime = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
            }
        }
        if (isprime)
        {
            cout << "Number is prime !!";
        }
        else
        {
            cout << "Number is not prime !!";
        }
    }
    else
    {
        cout << "Number is not prime !!";
    }
    return 0;
}