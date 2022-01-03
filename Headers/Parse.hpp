#ifndef PARSE_HPP
#define PARSE_HPP
#include <cmath>
#include <string>
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
#endif