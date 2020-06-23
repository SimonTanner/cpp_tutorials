#include <iostream>

using namespace std;

main() {
    int age;
    
    cout << "Please enter your age: ";
    cin >> age;
    string isAdult;

    isAdult = (age >= 18) ? "You are an adult!" : "You are not an adult!";
    cout << isAdult << endl;
}