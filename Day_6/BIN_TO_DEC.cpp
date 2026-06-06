#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a binary number :";
    cin >> n;
    int num = 0;
    int power = 0;
    while (n > 0)
    {
        int ld = n % 10;
        num += ld * (pow(2, power));
        power += 1;
        n /= 10;
    }
    cout << "Your decimal number is :" << num;
    return 0;
}