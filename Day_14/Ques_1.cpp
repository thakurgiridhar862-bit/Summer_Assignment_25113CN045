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
    int target;
    cout << "Enter the target :";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            cout << "Target Found !! at " << i << "th index";
            break;
        }
    }
    return 0;
}