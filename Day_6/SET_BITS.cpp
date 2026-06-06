#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    long long bin = 0;
    long long pos = 1;
    while (n > 0)
    {
        int rem = n % 2;
        bin = bin + rem * pos;
        pos *= 10;
        n /= 2;
    }
    int count = 0;
    while (bin > 0)
    {
        int ld = bin % 10;
        if (ld == 1)
        {
            count++;
        }
        bin /= 10;
    }
    cout << "Number of set digits are : " << count;
    return 0;
}