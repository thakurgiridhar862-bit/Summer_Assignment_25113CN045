#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter A number of which sum of digits you wants :";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        sum += ld;
        n = n / 10;
    }
    cout << "Your Sum of digits is :" << sum;
    return 0;
}