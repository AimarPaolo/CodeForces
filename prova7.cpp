#include <iostream> 
#include <vector> 
using namespace std; 

void recursion(vector<string>& partial, int n){
	if(n == 0){
        //necessario controllare che n==0, non si può fare con la lunghezza del vettore
		return;
	}
	else{
		recursion(partial, n-1);
		partial.push_back("Coding Ninjas");
	}
}
vector<string> printNTimes(int n) {
	vector<string> partial;
	recursion(partial, n);
	return partial;
}