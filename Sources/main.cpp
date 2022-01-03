#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

class Parse {
public:
	static int toInt(string s) {
		int res=0;
		for(int i=s.size()-1;i>=0;i--)
			res+=(s[i]-'0')*pow(10,s.size()-1-i);
		return res;
	}

	static char toChar(string s) {
		return s[0];
	}
};

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
} settings;

class Map {
private:
	vector<vector<char>> a;
public:
	int height,weight,landmineNumber;

	Map(int th,int tw,int tl) {
		height=th;
		weight=tw;
		landmineNumber=tl;
		a.resize(height+1,vector<char>(weight+1,settings.unknownCharacter));
	}

	void print() {
		for(int i=1;i<=height;i++) {
			for(int j=1;j<=weight;j++)
				cout<<a[i][j]<<' ';
			cout<<endl;
		}
	}
};

int main() {
	cout<<"Loading...\n";
	settings.initialization();
	cout<<"Finish\n";
	Map map(settings.mapHeight,settings.mapWeight,settings.landmineNumber);
	cout<<"Game Start!\n";
	map.print();
	system("pause");
	return 0;
}