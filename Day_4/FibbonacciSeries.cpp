#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the term till which you want fibonacci sries :";
    cin >> n;
    int a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}