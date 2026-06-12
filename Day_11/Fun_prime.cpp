#include <iostream>
using namespace std;
void prime(int a)
{
    bool isprime = true;
    if (a == 1)
        isprime = false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime)
    {
        cout << "Number is prime";
    }
    else
        cout << "Number is not prime";
}
int main()
{
    int x;
    cout << "Enter a number :";
    cin >> x;
    prime(x);
    return 0;
}