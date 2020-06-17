#include <iostream>

using namespace std;

main () {
    float num_1, num_2, difference;

    cout << "Please the first number: ";
    cin >> num_1;
    cout << "Please the second number: ";
    cin >> num_2;

    difference = num_1 - num_2;

    cout << num_1 << " - " << num_2 << " = " << difference << endl;
    return 0;
}