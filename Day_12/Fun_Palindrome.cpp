#include <iostream>
using namespace std;
void palindrome(int n)
{
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum * 10 + ld;
        n /= 10;
    }
    if (sum == temp)
    {
        cout << "Number is palindrome";
    }
    else
    {
        cout << "Number is not palindrome";
    }
}
int main()
{
    int x;
    cout << "Enter a number : ";
    cin >> x;
    palindrome(x);
}