#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (int n = start; n <= end; n++)
    {
        int temp = n;
        int x = n;
        int count = 0;
        int sum = 0;

        // count digits
        while (x > 0)
        {
            count++;
            x = x / 10;
        }

        x = n;

        // calculate Armstrong sum
        while (x > 0)
        {
            int digit = x % 10;
            sum += pow(digit, count);
            x = x / 10;
        }

        // check condition
        if (sum == temp)
        {
            cout << n << " ";
        }
    }

    return 0;
}