#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    string word = "", longest = "";

    for (int i = 0; i <= s.length(); i++)
    {
        if (i < s.length() && s[i] != ' ')
        {
            word += s[i];
        }
        else
        {
            if (word.length() > longest.length())
                longest = word;

            word = "";
        }
    }

    cout << "Longest Word: " << longest;

    return 0;
}