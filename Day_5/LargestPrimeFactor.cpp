#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int temp = n;
    int large = -1;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            bool isprime = true;
            for (int j = 2; j * j < i; j++)
            {
                if (i % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
            {
                large = i;
            }
        }
    }
    cout << "Largest prime factor is : " << large;
    return 0;
}