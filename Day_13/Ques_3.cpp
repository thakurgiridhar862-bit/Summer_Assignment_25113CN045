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
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] < min)
        {
            min = a[j];
        }
    }
    cout << "Your Maximum term is : " << max << "\n";
    cout << "Your Minimum term is : " << min;
    return 0;
}