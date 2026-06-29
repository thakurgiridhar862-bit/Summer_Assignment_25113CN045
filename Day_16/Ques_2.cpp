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

    int maxfreq = 0;
    int maxfreqele = a[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > maxfreq)
        {
            maxfreq = count;
            maxfreqele = a[i];
        }
    }
    cout << "Maximum Frequency is : " << maxfreq;
    cout << "Maximum Frequency ELement is : " << maxfreqele;
    return 0;
}