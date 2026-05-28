#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of which product of digits you want :";
    cin >> n;
    int product = 1;
    while (n > 0)
    {
        int ld = n % 10;
        product *= ld;
        n = n / 10;
    }
    cout << "Product of Digits is :" << product;
    return 0;
}