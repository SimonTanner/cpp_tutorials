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

    bool isInRange = (input >= minimum && input <= maximum);
    cout << "Is the number " << input << " contained in the interval from " << minimum << " to " << maximum << "?" << endl;
    cout << isInRange << endl;
    if (isInRange == 1) {
        cout << "True" << endl;
    }
    if (isInRange == 0) {
        cout << "False" << endl;
    }
    return 0;
}