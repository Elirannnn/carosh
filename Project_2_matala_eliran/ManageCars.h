#pragma once
#include <iostream>
#include "MyCar.h"
using namespace std;

class ManageCars {
private:
	MyCar* value;
    int numOfCars;
	
	
public:
	
	ManageCars();
	~ManageCars();
	void printNumOfCars();
	void addCar(MyCar& car);
	void removeCar(int plate);
	void printCar(int plate);
	void carsFromToYears(int StartYear, int FinishYear);
	void BetweenCarPrices(int StartPrice, int LastPrice);
	void deleteAll();
	void printAll();
};