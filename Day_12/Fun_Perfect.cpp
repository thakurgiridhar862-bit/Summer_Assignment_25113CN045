#include <iostream>
using namespace std;
void perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << "Number is perfect";
    }
    else
    {
        cout << "Number is not perfect";
    }
}
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    perfect(x);
    return 0;
}