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
    int c[n + m];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
    cout << "Merged array is : ";
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}