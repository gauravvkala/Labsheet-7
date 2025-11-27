#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to find: ";
    cin >> ch;

    char* ptr = strchr(str, ch);

    if(ptr)
        cout << "First occurrence at position: " << (ptr - str);
    else
        cout << "Character not found.";

    return 0;
}
