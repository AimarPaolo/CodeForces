#include<math.h>
#include<iostream>

using namespace std;

double areaSwitchCase(int ch, int a[2]) {
	// Write your code here
	switch(ch){
		case 1:
			return M_PI*pow(a[0], 2);
		case 2:
			return a[0]*a[1];
	}
}
int main(){
    int a[2] = {10, 30}; 
    double value = areaSwitchCase(2, a);
    cout << value << endl;
    return 0;
}