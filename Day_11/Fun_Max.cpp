#include <iostream>
using namespace std;
void max(int a, int b)
{
    if (a > b)
        cout << a << " is maximum";
    else
        cout << b << " is maximum";
}
int main()
{
    int x, y;
    cout << "Enter first number :";
    cin >> x;
    cout << "Enter second number :";
    cin >> y;
    max(x, y);
    return 0;
}