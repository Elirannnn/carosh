#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "MyCar.h"

MyCar::MyCar() {
	License_plate = 0;
	model = 0;
	price = 0;
	year = 0;
	color = nullptr;
	Engine_capacity = 0;
	gear = nullptr;
	Manufacturing_country = nullptr;
	hand = 0;
}

MyCar::MyCar(int License_Plate, int model, int price, int year, const char* color, int Engine_capacity, const char* gear, const char* Manufacturing_country, int hand)
{
	setLicensePlate(License_Plate);
	setModel(model);
	setPrice(price);
	setYear(year);
	setColor(color);
	setEngineCapacity(Engine_capacity);
	setgear(gear);
	setManufacturingCountry(Manufacturing_country);
	setHand(hand);
}
bool MyCar::TheCompare(MyCar& other) {
	if (year < other.getYear()) {
		return 1;
	}
	else {
		return 0;
	}
}

void MyCar::Print() {
	cout << License_plate << endl;
	cout << model << endl;
	cout << price << endl;
	cout << year << endl;
	cout << color << endl;
	cout << Engine_capacity << endl;
	cout << gear << endl;
	cout << Manufacturing_country << endl;
	cout << hand << endl;
}

int MyCar::getLicense_Plate()
{
	return License_plate;
}

int MyCar::getModel()
{
	return model;
}

int MyCar::getPrice()
{
	return price;
}

int MyCar::getYear()
{
	return year;
}

char* MyCar::getColor()
{
	return color;
}

int MyCar::getEngine_capacity()
{
	return Engine_capacity;
}

char* MyCar::getgear()
{
	return gear;
}

char* MyCar::getManufacturingCountry()
{
	return Manufacturing_country;
}

int MyCar::getHand()
{
	return hand;
}

void MyCar::setLicensePlate(int license)
{
	License_plate = license;
}

void MyCar::setModel(int model)
{
	this->model = model;
}

void MyCar::setPrice(int price)
{
	if (price > 0) {
		this->price = price;
	}else {
		cout << "Invalid price value." << endl;
	}
}

void MyCar::setYear(int year)
{
	this->year = year;
}

void MyCar::setColor(const char* color1)
{
	if (color) {
		delete[] color;
	}
	color = new char[strlen(color1) + 1];
	strcpy(color, color1);
}

void MyCar::setEngineCapacity(int engineChar)
{
	if (engineChar > 0) {
		Engine_capacity = engineChar;
	}
}

void MyCar::setgear(const char* Gear)
{
	if (gear) {
		delete[] gear;
	}
	gear = new char[strlen(Gear) + 1];
	strcpy(gear, Gear);
}

void MyCar::setManufacturingCountry(const char* country)
{
	if (Manufacturing_country) {
		delete[] Manufacturing_country;
	}
	Manufacturing_country = new char[strlen(country) + 1];
	strcpy(Manufacturing_country, country);
}

void MyCar::setHand(int hand)
{
	if (hand > 0) {
		this->hand = hand;
	}
	else {
		cout << "Invalid hand value." << endl;
	}
}
