#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    int words = 1;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            words++;
    }

    cout << "Number of words = " << words;
    return 0;
}
