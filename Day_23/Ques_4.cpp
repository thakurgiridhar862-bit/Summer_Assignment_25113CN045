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

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = char(i);
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq;

    return 0;
}