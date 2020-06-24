#include <iostream>

using namespace std;

main() {
    int arrayLen = 4;
    double array[arrayLen];

    for (int i = 0; i < arrayLen; i++) {
        double value;
        cout << "Please enter value " << i << " = ";
        cin >> value;
        array[i] = value;
    }

    double result = 0;

    for (int i = 0; i < arrayLen; i++) {
        result += array[i];
    }

    cout << "Result = " << result << endl;
    cout << "Address of first element = " << &array[0] << endl;
    cout << "Address of last element = " << &array[3] << endl;
}