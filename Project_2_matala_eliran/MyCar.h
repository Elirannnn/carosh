#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
class MyCar {
private:
	int License_plate; // "מספר רישוי"
	int model;        // "דגם"
	int price;        // "מחיר"
	int year;         // "שנה" 
	char* color;       // "צבע"
	int Engine_capacity;// "נפח מנוע" 
	char* gear;   // "סוג גיר"
	char* Manufacturing_country;// "ארץ יצור"
	int hand;         // "יד"

public:
	MyCar();
	MyCar(int License_plate, int model, int price,
		int year, const char* color, int Engine_capacity,
		const char* gear, const char* Manufacturing_country, int hand);
	bool TheCompare(MyCar& other);
	void Print();
	int getLicense_Plate();
	int getModel();
	int getPrice();
	int getYear();
	char* getColor();
	int getEngine_capacity();
	char* getgear();
	char* getManufacturingCountry();
	int getHand();

	void setLicensePlate(int license);
	void setModel(int model);
	void setPrice(int price);
	void setYear(int year);
	void setColor(const char* color);
	void setEngineCapacity(int engineC);
	void setgear(const char* Gear);
	void setManufacturingCountry(const char* country);
	void setHand(int hand);

};