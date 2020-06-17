#include <iostream>

using namespace std;

main () {
    int num_1, num_2, remainder;

    cout << "Please the first number: ";
    cin >> num_1;
    cout << "Please the second number: ";
    cin >> num_2;

    remainder = num_1 % num_2;

    cout << num_1 << " % " << num_2 << " = " << remainder << endl;
    return 0;
}