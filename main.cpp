	//main.cpp
	#include <string>
	#include <iostream>
	#include <fstream>
	#include "student.h"
	#include "address.h"
	#include "date.h"

	using namespace std;

	int main(){

		Student *S = new Student[50];

		ifstream inFile;
		inFile.open("data.dat");

		string lines[51];
		string item;
		int x = 0;
		while(!inFile.eof()){
			getline(inFile, item);
			if(item != ""){
				lines[x] = item;
				x++;
			}
		}

		for (int i = 0; i < 50; i++){
			string line = lines[i + 1];
			string delimiter = ",";

			size_t pos = 0;
			string sub;
			x = 0;

			while((pos = line.find(delimiter)) != string::npos){
				sub = line.substr(0, pos);
				line.erase(0, pos + delimiter.length());
				if(x == 0){
					S[i].setLName(sub);
				}else if(x == 1){
					S[i].setFName(sub);
				}else if(x == 2 || x == 3 || x == 4 || x == 5 || x == 6){
					S[i].setAddressInfo(sub, x - 2);
				}else if(x == 7 || x == 8){
					S[i].setDate(sub, x - 7);
				}else if(x == 9){
					S[i].setGPA(sub);
				}

				S[i].setCredHours(line);
				x++;
			}

			cout << S[i].unsortedPrint() << endl;

		}

		inFile.close();

		delete[] S;

		return 0;

	}