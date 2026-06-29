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
    int el;
    cout << "Enter the element of which frequency you want : ";
    cin >> el;
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == el)
        {
            freq++;
        }
    }
    if (freq == 0)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Frequency of given element is : " << freq;
    }
    return 0;
}