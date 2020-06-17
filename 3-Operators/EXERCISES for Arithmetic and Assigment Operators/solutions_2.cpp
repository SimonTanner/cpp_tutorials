#include <iostream>

using namespace std;

main () {
    float fahrenheit, celsius, kelvin;

    cout << "Please enter the temperature in degrees celsius: ";
    cin >> celsius;
    fahrenheit = celsius * 9 / 5 + 32;
    kelvin = celsius + 273.15;
    cout << celsius << "C = " << fahrenheit << "F and " << kelvin << "K" << endl;
    return 0;
}