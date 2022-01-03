#include <iostream>
#include "../Headers/Parse.hpp"
#include "../Headers/Setting.hpp"
#include "../Headers/Map.hpp"
using namespace std;
Setting settings;
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