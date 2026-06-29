#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first = 0, second = 1;

    if (n >= 1)
        cout << first << " ";

    if (n >= 2)
        cout << second << " ";

    for (int i = 3; i <= n; i++)
    {
        int third = first + second;
        cout << third << " ";

        first = second;
        second = third;
    }
}

int main()
{
    int x;
    cout << "Enter number of terms: ";
    cin >> x;

    fibonacci(x);

    return 0;
}