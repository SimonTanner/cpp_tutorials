#include <iostream>

using namespace std;

main() {
    int arrayLen = 3;
    int multiArray[arrayLen][arrayLen];

    for (int i = 0; i < arrayLen; i++) {
        for (int j = 0; j < arrayLen; j++) {
            multiArray[i][j] = (i - j + 25);
        }
    }

    int x, y;

    cout << "Please enter x: ";
    cin >> x;
    cout << "Please enter y: ";
    cin >> y;

    cout << multiArray[(x - 1)][(y -1)] << endl;
}