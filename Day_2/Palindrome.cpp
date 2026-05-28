#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number which You want check :";
    cin >> n;
    int org = n;
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    if (org == rev)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";
    return 0;
}