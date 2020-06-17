#include <iostream>

using namespace std;

main () {
    int minimum, maximum, input;
    
    cout << "Minimum value: ";
    cin >> minimum;
    cout << "Maximum value: ";
    cin >> maximum;
    cout << "Value to check: ";
    cin >> input;

    bool isGreaterOrEqual = (input >= minimum);
    bool isLessOrEqual = (input <= maximum);
    cout << "Is the value " << input << " greater or equal to min value ? " << isGreaterOrEqual << endl;
    cout << "Is the value " << input << " lower or equal to max value ? " << isLessOrEqual << endl;

    return 0;
}