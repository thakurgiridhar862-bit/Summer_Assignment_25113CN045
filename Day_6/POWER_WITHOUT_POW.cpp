#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout << "Enter a number :";
    cin >> n;
    cout << "Enter the power :";
    cin >> p;

    int ans = 1;

    for (int i = 1; i <= p; i++)
    {
        ans *= n;
    }

    cout << "Your ans is :" << ans;

    return 0;
}