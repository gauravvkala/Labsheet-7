#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];

    cout << "Enter first string: ";
    cin.getline(a, 100);

    cout << "Enter second string: ";
    cin.getline(b, 100);

    int result = strcmp(a, b);

    if(result == 0)
        cout << "Strings are equal.";
    else if(result < 0)
        cout << "First string comes first alphabetically.";
    else
        cout << "Second string comes first alphabetically.";

    return 0;
}
