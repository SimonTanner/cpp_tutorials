#include <iostream>
#include <unordered_map>

using namespace std;

main() {
    unordered_map<int, int> daysPerMonth = {
        {1, 31},
        {2, 28},
        {3, 31},
        {4, 30},
        {5, 31},
        {6, 30},
        {7, 31},
        {8, 31},
        {9, 30},
        {10, 31},
        {11, 30},
        {12, 31}
    };

    int monthNum;

    cout << "Please enter the number if the month e.g. 1 for January: ";
    cin >> monthNum;

    if (monthNum < 1 || monthNum > 12) {
        cout << "Error. The number must be between 1 - 12." << endl;
        return 0;
    }

    switch (monthNum) {
        case 2:
            int year, numDays;
    
            cout << "Please enter the year: ";
            cin >> year;
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
                numDays = 29;
            else
                numDays = daysPerMonth[monthNum];

            cout << "The month february has " << numDays << " days in year " << year << endl;
            break;
        
        default:
            cout << "This month has " << daysPerMonth[monthNum] << " days" << endl;
            break;
    }

    return 0;
}