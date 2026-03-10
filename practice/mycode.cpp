#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "enter character:";
    cin >> character;
    if (character == 'a')
    {
        cout << "it is a vowel";
    }
    else if (character == 'e')
    {
        cout << "it is a vowel";
    }
    else if (character == 'i')
    {
        cout << "it is a vowel";
    }
    else if (character == 'o')
    {
        cout << "it is a vowel";
    }
    else if (character == 'u')
    {
        cout << "it is a vowel";
    }
    else if (character >= 'a')
    {
        cout << "it is consonant";
    }
    else if (character >= '0')
    {
        cout << "it is a digit";
    }
}