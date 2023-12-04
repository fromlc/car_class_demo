//------------------------------------------------------------------------------
// car_class_demo.cpp 
//
//  -demos syntax for C++ classes
//	-accepts and displays data for a Car class instance.
//------------------------------------------------------------------------------
#include "Car.h"

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// local functions
//------------------------------------------------------------------------------
string getCarData(const string& carData);

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    Car dreamCar;
    char another { };

    cout << "\nWhat's your dream car?\n";

    // set/get Car instance members until user quits
    do {

        cout << '\n';

        dreamCar.setYear(getCarData("Year: "));
        dreamCar.setMake(getCarData("Make: "));
        dreamCar.setModel(getCarData("Model: "));
        dreamCar.setColor(getCarData("Color: "));

        // user's dream car
        cout << "\n\nA "
            << dreamCar.getColor() << " "
            << dreamCar.getYear() << " "
            << dreamCar.getMake() << " "
            << dreamCar.getModel() << " would be awesome! I want one too.\n";

        cout << "\nAnother dream car? (y/n)";
        cin >> another;
        if (tolower(another) != 'y')
            break;

    } while (tolower(another) == 'y');

    return 0;
}

//------------------------------------------------------------------------------
// returns one-word user input string
//------------------------------------------------------------------------------
string getCarData(const string& prompt) {

    string data;
    cout << prompt;
    cin >> data;

    return data;
}
