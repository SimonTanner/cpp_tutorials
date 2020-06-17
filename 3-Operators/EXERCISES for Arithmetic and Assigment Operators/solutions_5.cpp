#include <iostream>

using namespace std;

main () {
    float num_1, num_2, product;

    cout << "Please the first number: ";
    cin >> num_1;
    cout << "Please the second number: ";
    cin >> num_2;

    product = num_1 * num_2;

    cout << num_1 << " x " << num_2 << " = " << product << endl;
    return 0;
}