#include <iostream>
#include <cstring>
using namespace std;

// Function to sort characters of a string
void sortString(char str[]) {
    int n = strlen(str);
    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(str[i] > str[j])
                swap(str[i], str[j]);
}

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Remove spaces (optional for pure anagram checking)
    char s1[100] = "", s2[100] = "";
    int j = 0;

    for(int i = 0; i < strlen(str1); i++)
        if(str1[i] != ' ') s1[j++] = tolower(str1[i]);
    s1[j] = '\0';

    j = 0;
    for(int i = 0; i < strlen(str2); i++)
        if(str2[i] != ' ') s2[j++] = tolower(str2[i]);
    s2[j] = '\0';

    sortString(s1);
    sortString(s2);

    if(strcmp(s1, s2) == 0)
        cout << "Strings are anagrams.";
    else
        cout << "Strings are NOT anagrams.";

    return 0;
}
