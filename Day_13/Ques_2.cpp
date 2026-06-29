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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int avg = sum / n;
    cout << "Your Sum of array is : " << sum;
    cout << "Your Average of array is : " << avg;
    return 0;
}