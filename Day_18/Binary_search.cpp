#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int a[n];

    cout << "Enter the elements (Sorted) : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cout << "Enter the element to search : ";
    cin >> target;

    int low = 0;
    int high = n - 1;
    bool found = false;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == target)
        {
            cout << "Element Found at index : " << mid;
            found = true;
            break;
        }
        else if (target > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element Not Found";
    }

    return 0;
}