#include <iostream>
using namespace std;
int main()
{
    int n;
    long long fact = 1;
    cout << "Enter the number of which factorial you want :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Your Factorial is :" << fact;
    return 0;
}