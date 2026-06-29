#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n - 1];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    int exp_sum = n * (n + 1) / 2;
    int act_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        act_sum += a[i];
    }
    int miss_ele = exp_sum - act_sum;
    cout << "Missing Element : " << miss_ele;
    return 0;
}