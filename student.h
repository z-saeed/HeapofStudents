//student.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "date.h"
#include "address.h"
using namespace std;

class Student {

	private:
		string fName;
		string lName;
		Date dateOfBirth;
		Date dateOfComp;
    	Address home;
    	string GPA;
    	string credHours;

	public:
		Student();
		void setFName(string fName);
		void setLName(string lName);
		void setGPA(string GPA);
		void setCredHours(string credHours);
		void setAddressInfo(string info, int part);
		void setDate(string info, int part);
		string getFName();
		string getLName();
		string getGPA();
		string getCredHours();
		void reportStudent();
		string unsortedPrint();
		~Student();		

};//end class def 

#endif