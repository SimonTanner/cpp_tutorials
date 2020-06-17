#include <iostream>

using namespace std;

main () {
    float num_1, num_2, quotient;

    cout << "Please the first number: ";
    cin >> num_1;
    cout << "Please the second number: ";
    cin >> num_2;

    quotient = num_1 / num_2;

    cout << num_1 << " / " << num_2 << " = " << quotient << endl;
    return 0;
}
