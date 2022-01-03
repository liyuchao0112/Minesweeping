#include <iostream>
#include "../Headers/Parse.hpp"
#include "../Headers/Setting.hpp"
#include "../Headers/Map.hpp"
using namespace std;
Setting settings;
Map map;
void run() {
	while(ture) {
		map.print();
		cout<<"1.标记地雷\n"
			<<"2.标记安全\n"
			<<"3.exit\n";
		int t;
		cin>>t;
		switch(t) {
		case 1:
			int x,y;
			cin>>x>>y;
		case 2:
			int x,y;
			cin>>x>>y;
		}
	}
}
int main() {
	cout<<"Loading...\n";
	settings.initialization();
	cout<<"Finish\n";
	map=Map(settings.mapHeight,settings.mapWeight,settings.landmineNumber);
	cout<<"Game Start!\n";
	system("cls");
	run();
	return 0;
}