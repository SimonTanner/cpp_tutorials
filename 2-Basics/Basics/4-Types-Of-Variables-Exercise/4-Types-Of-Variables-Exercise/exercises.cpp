#include <iostream>

using namespace std;

main () {

    char a;
    int b;
    short c;
    float d;
    double e;

    a = 'H';
    cout << a << endl;
    cout << &a << endl;

    b = 1;
    cout << b << endl;
    cout << &b << endl;

    c = 123;
    cout << c << endl;
    cout << &c << endl;

    d = 0.01234;
    cout << d << endl;
    cout << &d << endl;

    e = 123456789089798098098980.732897293872;
    cout << e << endl;
    cout << &e << endl;
}