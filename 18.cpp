#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100], dest[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    strncpy(dest, source, 5);
    dest[5] = '\0';  // terminate manually

    cout << "Copied first 5 characters: " << dest;
    return 0;
}
