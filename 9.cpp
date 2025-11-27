#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    char arr[50][100];

    cout << "Enter strings:\n";
    for(int i = 0; i < n; i++)
        cin.getline(arr[i], 100);

    for(int i = 0; i < n-1; i++)
        for(int j = i+1; j < n; j++)
            if(strcmp(arr[i], arr[j]) > 0)
                swap(arr[i], arr[j]);

    cout << "Strings in alphabetical order:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}
