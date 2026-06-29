#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int start = 0, end = s.length() - 1;
    bool palindrome = true;

    while (start < end)
    {
        if (s[start] != s[end])
        {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        cout << "Palindrome String";
    else
        cout << "Not Palindrome String";

    return 0;
}