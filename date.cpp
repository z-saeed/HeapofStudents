//date.cpp
#include <string>
#include <iostream>
#include "date.h"

using namespace std;

Date::Date(){
	
	day = "21";
	Date::month = "02";
	Date::year = "1996";
}

void Date::setDate(string date){
	Date::date = date;

	string delimiter = "/";
	size_t pos = 0;
	string sub;
	int x = 0;

	while((pos = date.find(delimiter)) != string::npos){
		sub = date.substr(0, pos);
		date.erase(0, pos + delimiter.length());
		if(x == 0){
			setMonth(sub);
		}else if(x == 1){
			setDay(sub);
		}else if(x == 2){
			setYear(sub);
		}
	}
}

void Date::setDay(string day){
	Date::day = day;
}

void Date::setMonth(string month){
	Date::month = month;
}

void Date::setYear(string year){
	Date::year = year;
}

string Date::getDay(){
	return Date::day;
}

string Date::getMonth(){
	return Date::month;
}

string Date::getYear(){
	return Date::year;
}

Date::~Date(){
	
}