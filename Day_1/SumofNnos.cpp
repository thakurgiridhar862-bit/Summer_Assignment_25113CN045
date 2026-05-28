#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number till which you want the sum :" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of first n Natural number is :" << sum;
    return 0;
}