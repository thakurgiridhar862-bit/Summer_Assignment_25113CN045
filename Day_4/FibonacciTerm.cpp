#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the term number: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 1)
    {
        cout << "1st term is: " << a;
    }
    else if (n == 2)
    {
        cout << "2nd term is: " << b;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << n << "th term is: " << b;
    }

    return 0;
}