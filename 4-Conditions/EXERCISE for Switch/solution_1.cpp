#include <iostream>

using namespace std;

main() {
    string item1, item2, item3, item4, item5, item6;

    item1 = "Snickers Bar";
    item2 = "Chocolate milkshake";
    item3 = "Jelly beans";
    item4 = "Cheese & Onion Crisps";
    item5 = "Crackers";
    item6 = "Wine Gums";

    int choice;

    cout << "1. " << item1 << endl;
    cout << "2. " << item2 << endl;
    cout << "3. " << item3 << endl;
    cout << "4. " << item4 << endl;
    cout << "5. " << item5 << endl;
    cout << "6. " << item6 << endl;
    cout << "Please select an item: ";
    cin >> choice;

    string item;
    switch (choice) {
        case 1:
            item = item1;
            break;
        case 2:
            item = item2;
            break;
        case 3:
            item = item3;
            break;
        case 4:
            item = item4;
            break;
        case 5:
            item = item5;
            break;
        case 6:
            item = item6;
            break;
        default:
            cout << "Error. Invalid choice." << endl;
            return 0;

    }

    cout << "You have chosen a " << item << endl;

    return 0;
}