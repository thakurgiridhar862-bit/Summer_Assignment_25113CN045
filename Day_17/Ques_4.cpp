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

    cout << "Common Elements : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}