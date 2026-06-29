#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even numbers in array : " << even << "\n";
    cout << "Odd numbers in array : " << odd;
    return 0;
}