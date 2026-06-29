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

    int t;
    cout << "Enter the targeted sum : ";
    cin >> t;

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == t)
            {
                cout << "Elements are : " << a[i] << " " << a[j];
                found = true;
                return 0;
            }
        }
    }

    if (!found)
    {
        cout << "No Pair Found";
    }

    return 0;
}