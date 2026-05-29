#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the number from which prime numbers you want :";
    cin >> m;
    cout << "Enter the number till which prime numbers you want :";
    cin >> n;
    cout << "Your prime numbers are :";
    for (int i = m; i <= n; i++)
    {
        if (i > 1)
        {
            bool isprime = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}