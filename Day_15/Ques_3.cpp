#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp = a[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    cout << "Reversed array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}