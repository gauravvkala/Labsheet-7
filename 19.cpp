#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[300] = "";
    char word[100];
    int n;

    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    cout << "Enter strings:\n";
    for(int i = 0; i < n; i++) {
        cin.getline(word, 100);
        strcat(sentence, word);
        if(i < n - 1)
            strcat(sentence, " ");
    }

    cout << "Joined sentence: " << sentence;
    return 0;
}
