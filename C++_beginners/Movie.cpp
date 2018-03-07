#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie() {
	movieName = "";
	year = 19000;
	rating = "G";
}
Movie::Movie(string name, int year, string rating)
{
	movieName = name;
	while (year < 1950 || year > 2018)
	{
		cout << "Invalid year, please enter between 1950 and present: ";
		cin >> year;
		cin.ignore();
	}
	this->year = year;
	this->rating = rating;
}

Movie::~Movie() {

}
string Movie::getName()
{
	return movieName;
}
void Movie::setName(string name)
{
	movieName = name;
}
int Movie::getYear()
{
	return year;
}
void Movie::setYear(int year)
{
	while (year < 1950 || year > 2018)
	{
		cout << "Invalid year, please enter between 1950 and present: ";
		cin >> year;
		cin.ignore();
	}
	this->year = year;
}
string Movie::getRating()
{
	return rating;
}
void Movie::setRating(string rating)
{
	this->rating = rating;
}

