//address.cpp
#include <string>
#include <iostream>
#include "address.h"

using namespace std;

Address::Address(){
	Address::address1 = "13248 Lorenzo Blvd";
	Address::address2 = "";
	Address::city = "Carmel";
	Address::state = "Indiana";
	Address::zip = "46074";
}

Address::Address(string address1, string address2, string city, string state, string zip){
	Address::address1 = address1;
	Address::address2 = address2;
	Address::city = city;
	Address::state = state;
	Address::zip = zip;
}

void Address::setAddress1(string address1){
	Address::address1 = address1;
}

void Address::setAddress2(string address2){
	Address::address2 = address2;
}

void Address::setCity(string city){
	Address::city = city;
}

void Address::setState(string state){
	Address::state = state;
}

void Address::setZip(string zip){
	Address::zip = zip;
}

string Address::getAddress1(){
	return Address::address1;
}

string Address::getAddress2(){
	return Address::address2;
}

string Address::getCity(){
	return Address::city;
}

string Address::getState(){
	return Address::state;
}

string Address::getZip(){
	return Address::zip;
}

Address::~Address(){
	
}