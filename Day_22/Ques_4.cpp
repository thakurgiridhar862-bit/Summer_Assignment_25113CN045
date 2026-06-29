#include <iostream>
using namespace std;

int main()
{
    string s, result = "";

    cout << "Enter string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            result += s[i];
    }

    cout << "String without spaces: " << result;

    return 0;
}