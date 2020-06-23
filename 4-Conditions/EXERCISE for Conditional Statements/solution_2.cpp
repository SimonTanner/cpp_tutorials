#include <iostream>

using namespace std;

main () {
    int minimum, maximum, inputVal;
    
    cout << "Minimum value: ";
    cin >> minimum;
    cout << "Maximum value: ";
    cin >> maximum;

    if (maximum <= minimum) {
        cout << "Error. Maximum value cannot be lower than the minimum value." << endl;
        return 0;
    }

    cout << "Value to check: ";
    cin >> inputVal;

    bool isInInterval = (inputVal >= minimum && inputVal <= maximum);

    if (isInInterval)
        printf("The number %d belongs to the interval from %d to %d.\n", inputVal, minimum, maximum);
    else
        printf("The number %d doesn't belong to the interval from %d to %d.\n", inputVal, minimum, maximum);

    return 0;
}