	//student.cpp
	#include <string>
	#include <iostream>
	#include "student.h"

	using namespace std;

	Student::Student(){

	}

	void Student::setFName(string fName){
		Student::fName = fName;
	}

	void Student::setLName(string lName){
		Student::lName = lName;
	}

	void Student::setGPA(string GPA){
		Student::GPA = GPA;
	}

	void Student::setCredHours(string credHours){
		Student::credHours = credHours;
	}

	void Student::setAddressInfo(string info, int part){
		if(part == 0){
			Student::home.setAddress1(info);
		}else if(part == 1){
			Student::home.setAddress2(info);
		}else if(part == 2){
			Student::home.setCity(info);
		}else if(part == 3){
			Student::home.setState(info);
		}else if(part == 4){
			Student::home.setZip(info);
		}
	}

	void Student::setDate(string info, int part){
		if(part == 0){
			Student::dateOfBirth.setDate(info);
		}else if(part == 2){
			Student::dateOfComp.setDate(info);
		}
	}

	string Student::getFName(){
		return Student::fName;
	}

	string Student::getLName(){
		return Student::lName;
	}

	string Student::getGPA(){
		return Student::GPA;
	}

	string Student::getCredHours(){
		return Student::credHours;
	}

	void Student::reportStudent(){

	}

	string Student::unsortedPrint(){

		return (getLName() + ", " + getFName() + ", " + home.getAddress1() + ", " + home.getAddress2() + ", " + home.getCity() + ", " + home.getState() + ", " + home.getZip() +
			", " + dateOfBirth.getMonth() + ", " + dateOfBirth.getDay() + ", " + dateOfBirth.getYear() + ", " + dateOfComp.getMonth() + ", " + dateOfComp.getDay() + ", " + 
			dateOfComp.getYear() + ", " + getGPA() + ", " + getCredHours());

	}

	Student::~Student(){
		
	}