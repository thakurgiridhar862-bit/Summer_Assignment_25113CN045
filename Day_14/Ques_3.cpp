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
    int largest = a[0];
    int second_largest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
    }
    cout << "Second Largest Element is : " << second_largest;
    return 0;
}