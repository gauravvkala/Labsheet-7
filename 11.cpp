#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strcpy(rev, str);
    strrev(rev);

    if(strcmp(str, rev) == 0)
        cout << "It is a palindrome.";
    else
        cout << "Not a palindrome.";

    return 0;
}
