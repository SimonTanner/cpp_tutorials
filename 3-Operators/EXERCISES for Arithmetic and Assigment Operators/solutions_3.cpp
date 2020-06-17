#include <iostream>

using namespace std;

main () {
    float num_1, num_2, sum;

    cout << "Please the first number: ";
    cin >> num_1;
    cout << "Please the second number: ";
    cin >> num_2;

    sum = num_1 + num_2;

    cout << num_1 << " + " << num_2 << " = " << sum << endl;
    return 0;
}