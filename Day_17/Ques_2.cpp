#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of first array : ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of first array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cout << "Enter the size of second array : ";
    cin >> m;

    int b[m];
    cout << "Enter the elements of second array : ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << "Union of arrays : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << b[i] << " ";
        }
    }

    return 0;
}