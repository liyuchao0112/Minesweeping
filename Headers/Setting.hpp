#ifndef SETTING_HPP
#define SETTING_HPP
#include <iostream>
#include <fstream>
#include <string>
#include "Parse.hpp"
using namespace std;
class Setting {
private:
	ifstream fin;
public:
	int mapWeight;
	int mapHeight;
	int landmineNumber;
	char unknownCharacter;
	char landmineCharacter;

	void initialization() {
		fin.open("config.txt");
		if(!fin.is_open())
			clog<<"[ERROR] Configuration read failed!\n";
		for(string line;fin>>line;) {
			int del=line.find('=');
			string var=line.substr(0,del);
			string val=line.substr(del+1);
			if(var=="MapWeight")
				mapWeight=Parse::toInt(val);
			if(var=="MapHeight")
				mapHeight=Parse::toInt(val);
			if(var=="LandmineNumber")
				landmineNumber=Parse::toInt(val);
			if(var=="UnknownCharacter")
				unknownCharacter=Parse::toChar(val);
			if(var=="LandmineCharacter")
				landmineCharacter=Parse::toChar(val);
		}
		fin.close();
	}
};
#endif