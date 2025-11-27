#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], result[200];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for(int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
            result[j++] = str[i];
    }
    result[j] = '\0';

    cout << "String after removing vowels: " << result;
    return 0;
}
