//date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>
using namespace std;

class Date {

	private:
		string date;
		string day;
		string month;
		string year;

	public:
		Date();
		Date(string date);
		void setDate(string date);
		void setDay(string day);
		void setMonth(string month);
		void setYear(string year);
		string getDay();
		string getMonth();
		string getYear();
		~Date();

};//end class def 

#endif