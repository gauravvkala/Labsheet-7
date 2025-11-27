#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];

    cout << "Enter main string: ";
    cin.getline(str, 200);

    cout << "Enter substring: ";
    cin.getline(sub, 100);

    char* ptr = strstr(str, sub);

    if(ptr)
        cout << "Substring found at position: " << (ptr - str);
    else
        cout << "Substring not found.";

    return 0;
}
