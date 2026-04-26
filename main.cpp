#include <iostream>

#include <string>

#include <iterator>

using namespace std;

int lengthOfString(const string& text)

{
    if (text.empty())

    {
        return 0;
    }

    return 1 + lengthOfString(text.substr(1));
}

void generateStrings(char collection[], int size, string& CString, int k)

{
    if (CString.length() == k)

    {
        cout << CString << endl;

        return;
    }

    for (int i = 0; i < size; i++)

    {
        CString.push_back(collection[i]);

        generateStrings(collection, size, CString, k);

        CString.pop_back();
    }
}

int main()

{
    string word;

    cout << "Enter a string: ";

    cin >> word;

    cout << " Length: " << lengthOfString(word) << endl;

    cout << endl;

    char collection[] = {'a', 'b', 'c', 'd'};

    int size = std::size(collection);

    int k;

    cout << "Enter k: ";

    cin >> k;

    cout << "Strings:" << endl;

    string current;

    generateStrings(collection, size, current, k);

    return 0;
}