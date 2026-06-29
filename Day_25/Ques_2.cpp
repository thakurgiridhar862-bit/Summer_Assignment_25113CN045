#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    bool printed[256] = {false};

    cout << "Common characters: ";

    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if (s1[i] == s2[j] && printed[s1[i]] == false)
            {
                cout << s1[i] << " ";
                printed[s1[i]] = true;
                break;
            }
        }
    }

    return 0;
}