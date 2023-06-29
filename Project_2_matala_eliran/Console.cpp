
#include <iostream>
#include "MyCar.h"
#include "ManageCars.h"
#include <string>
using namespace std;

bool isAText(const string& str) {
    for (char c : str) {
        if (isdigit(c)) {
            return false;
        }
        else if (str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
bool isNum(const string& str) {
    for (char c : str) {
        if (isalpha(c)) {
            return false;
        }
        else if(str.empty()) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main() {

    ManageCars carManager;
	int input;
	const int MAX_SIZE = 100;
    while (1) {
        cout << "" << endl;
        cout << "To add a car type: 1\nTo remove a car write: 2\nTo print cars between 2 years write: 3\nTo print cars between 2 prices write: 4\nTo print all cars write: 5\nTo delete all cars write: 6" << endl;
        cin >> input;
        cout << "" << endl;
        cout << "" << endl;
        cin.ignore(); 

        if (input == 1) {            
            
            string licenseL; 
            while (1) {
                cout << "Enter license plate (number):" << endl;
                cin >> licenseL;
                cin.ignore();
                if (isNum(licenseL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int license = stoi(licenseL);

            string modelL;
            while (1) {
                cout << "Enter model (number):" << endl;
                cin >> modelL;
                cin.ignore();
                if (isNum(modelL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int model = stoi(modelL);

            string priceL;
            while (1) {
                cout << "Enter price (number):" << endl;
                cin >> priceL;
                cin.ignore();
                if (isNum(priceL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int price = stoi(priceL);

            string yearL;
            while (1) {
                cout << "Enter year (number):" << endl;
                cin >> yearL;
                cin.ignore();
                if (isNum(yearL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int year = stoi(yearL);

            char color[MAX_SIZE];
            while (1) {
                cout << "Enter a color (text):" << endl;
                cin.getline(color, MAX_SIZE);
                if (isAText(color)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            string engineL;
            while (1) {
                cout << "Enter engine (number):" << endl;
                cin >> engineL;
                cin.ignore();
                if (isNum(engineL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int engineChar = stoi(engineL);

            char gear[MAX_SIZE];
            while (1) {
                cout << "Enter gear type (text):" << endl;
                cin.getline(gear, MAX_SIZE);
                if (isAText(gear)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            char manufacturing[MAX_SIZE];
            while (1) {
                cout << "Enter a manufacturing country (text):" << endl;
                cin.getline(manufacturing, MAX_SIZE);
                if (isAText(manufacturing)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a text." << endl;
                }
            }

            string handL;
            while (1) {
                cout << "Enter hand (number):" << endl;
                cin >> handL;
                cin.ignore();
                if (isNum(handL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int hand = stoi(handL);

            MyCar car(license, model, price, year, color, engineChar, gear, manufacturing, hand);
            carManager.addCar(car);
        }

       else if (input == 2) {
            string plateL;
            while (1) {
                cout << "please enter car license plate to remove the car (number):" << endl;
                cin >> plateL;
                cin.ignore();
                if (isNum(plateL)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int hand = stoi(plateL);
            carManager.removeCar(hand);
        }

        else if (input == 3) {
            string Startingyear;
            string Lastyear;
            while (1) {
                cout << "Enter two years to search cars between them." << endl;
                cout << "Enter start year (number):" << endl;
                cin >> Startingyear;
                cout << "Enter end year (number):" << endl;
                cin >> Lastyear;
                cin.ignore();
                if (isNum(Startingyear) && isNum(Lastyear)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int fromYear = stoi(Startingyear);
            int toYear = stoi(Startingyear);
            carManager.carsFromToYears(fromYear, toYear);

        }

        else if (input == 4) {
            string StartingPrice;
            string LastPrice;
            while (1) {
                cout << "Enter two prices to search between cars." << endl;
                cout << "Enter the start price (number):" << endl;
                cin >> StartingPrice;
                cout << "Enter end price (number):" << endl;
                cin >> LastPrice;
                cin.ignore();
                if (isNum(StartingPrice) && isNum(LastPrice)) {
                    break;
                }
                else {
                    cout << "Invalid input enter again a number." << endl;
                }
            }
            int fromPrice = stoi(StartingPrice);
            int toPrice = stoi(StartingPrice);
            carManager.BetweenCarPrices(fromPrice, toPrice);

        }

        else if (input == 5) {
            carManager.printAll();
        }

        else if (input == 6) {
            carManager.deleteAll();
        }
        else {
            cout << "Invalid value.\nPlease enter again:" << endl;
        }

    }



	return 0;
	
}