#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++)
        freq[s[i]]++;

    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i]] == 1)
        {
            cout << "First non-repeating character: " << s[i];
            return 0;
        }
    }

    cout << "No non-repeating character";

    return 0;
}