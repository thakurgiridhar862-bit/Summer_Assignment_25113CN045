#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter A number :";
    cin >> n;
    int count = 0;
    n = abs(n); // For converting negative input to positive
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            n = n / 10;
            count++;
        }
    }
    cout << "Your number of digits in this number is :" << count;
    return 0;
}