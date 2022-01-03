#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Setting {
public:
	static void initialization() {
		ifstream fin("config.txt");
		if(!fin.is_open())
			clog<<"[ERROR] Configuration read failed!\n";
		for(string line;fin>>line;) {
			int del=line.find('=');
			cout<<line<<endl;
			string var=line.substr(0,del);
			if()
		}
	}
};
int main() {
	Setting::initialization();
	return 0;
}