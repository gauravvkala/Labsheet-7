#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], findStr[100];

    cout << "Enter main string: ";
    cin.getline(str, 200);

    cout << "Enter string to search: ";
    cin.getline(findStr, 100);

    if(strstr(str, findStr))
        cout << "String FOUND inside main string.";
    else
        cout << "String NOT found.";

    return 0;
}
