#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int n)
{
    int temp = n;
    int count = 0, sum = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    int temp2 = temp;
    while (temp > 0)
    {
        int ld = temp % 10;
        sum += round(pow(ld, count));
        temp /= 10;
    }
    if (sum == temp2)
    {
        cout << "Number is armstrong";
    }
    else
    {
        cout << "Number is not armstrong";
    }
}
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    armstrong(x);
    return 0;
}