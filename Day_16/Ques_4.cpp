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

    cout << "Array after removing duplicates : ";

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}