#include <iostream>

using namespace std;

main () {
    float lengthInches, lengthCent;

    cout << "Please enter the length in Inches: ";
    cin >> lengthInches;
    lengthCent = lengthInches * 2.54;
    cout << lengthInches << " Inches = " << lengthCent << "cm" << endl;
    return 0;
}