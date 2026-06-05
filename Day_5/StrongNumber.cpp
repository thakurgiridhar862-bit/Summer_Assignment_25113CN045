#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        long long int fact = 1;
        for (int i = 1; i <= ld; i++)
        {
            fact *= i;
        }
        sum += fact;
        n /= 10;
    }
    if (sum == temp)
    {
        cout << "Yes Number is strong";
    }
    else
    {
        cout << "No number is not strong";
    }
    return 0;
}