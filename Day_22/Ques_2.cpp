#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ' && inWord == false)
        {
            words++;
            inWord = true;
        }
        else if (s[i] == ' ')
        {
            inWord = false;
        }
    }

    cout << "Total Words = " << words;

    return 0;
}