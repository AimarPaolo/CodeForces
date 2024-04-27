#include <iostream>
using namespace std;

int dataTypes(string type) {
	// Write your code here
	string s = type;
	if(s.compare("Integer")==0){
		return 4;
	}
	else if (s.compare("Long")==0){
		return 8;
	}
	else if(s.compare("Float")==0){
		return 4;
	}else if(s.compare("Double")==0){
			return 8;
        } else if (s.compare("Character") == 0) {
                return 1;
        }
}
