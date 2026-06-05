#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;
    int temp = n;
    int x = n;
    int count = 0;
    while (x > 0)
    {
        count++;
        x = x / 10;
    }
    int sum = 0;
    x = n;
    while (x > 0)
    {
        int l = x % 10;
        int c = pow(l, count);
        sum += c;
        x /= 10;
    }
    if (sum == temp)
    {
        cout << "The Given number is Armstrong !!";
    }
    else
    {
        cout << "The Given number is not Armstrong !!";
    }
    return 0;
}