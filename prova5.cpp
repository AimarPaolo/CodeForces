#include<iostream>
using namespace std;

int main() {
	// Write your code here
	string s;
	int sumOdd = 0;
	int sumEven = 0;
	cin >> s;
	int leng = s.length();
	while(leng>0){
		if(int(s[leng-1]) % 2==0){
			sumEven += s[leng-1] - '0';
		}else{
			sumOdd += s[leng-1] - '0';
		}
		leng--;
	}
	cout << sumEven  << " " << sumOdd << endl;
	return 0;
}
