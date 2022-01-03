#ifndef MAP_HPP
#define MAP_HPP
#include <iostream>
#include <vector>
#include "Setting.hpp"
using namespace std;
extern Setting settings;
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
#endif