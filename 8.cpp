#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];

    cout << "Enter first string: ";
    cin.getline(s1, 100);

    cout << "Enter second string: ";
    cin.getline(s2, 100);

    if(strcmp(s1, s2) == 0)
        cout << "Strings are equal (case-sensitive).";
    else
        cout << "Strings are NOT equal.";

    return 0;
}
