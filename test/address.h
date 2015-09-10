//
//  address.h
//  
//
//  Created by Zaid Saeed on 3/3/15.
//
//

#ifndef ____address__
#define ____address__

#include <string>
using namespace std;

class Address {
private:
    string address1;
    string address2;
    string city;
    string state;
    string zip;
    
public:
    Address();
    void setAddress1(string address1);
    
};

#endif /* defined(____address__) */
