#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp1[100], temp2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcpy(temp1, str1);
    strcpy(temp2, str2);

    if(strcmp(temp1, temp2) == 0)
        cout << "Strings are equal.";
    else
        cout << "Strings are NOT equal.";

    return 0;
}
