#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fname[50], lname[50], full[100];

    cout << "Enter first name: ";
    cin.getline(fname, 50);

    cout << "Enter last name: ";
    cin.getline(lname, 50);

    strcpy(full, fname);
    strcat(full, " ");
    strcat(full, lname);

    cout << "Full Name: " << full;
    return 0;
}
