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

    if (choice <= 6 && choice >= 1) {
        string item;
        if (choice == 1)
            item = item1;
        else if (choice == 2)
            item = item2;
        else if (choice == 3)
            item = item3;
        else if (choice == 4)
            item = item4;
        else if (choice == 5)
            item = item5;
        else
            item = item6;
        
        cout << "You have chosen a " << item << endl;
    } else {
        cout << "Error. Invalid choice." << endl;
    }

    return 0;
}