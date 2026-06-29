#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;

        if (freq[s[i]] == 2)
        {
            cout << "First repeating character: " << s[i];
            return 0;
        }
    }

    cout << "No repeating character";

    return 0;
}