#include <iostream>
using namespace std;
#include vector;

void recursion(vector<int>& partial, int x, int i){
    if(i == n+1){
        return;
    }
    recursion(partial, n, i+1);
    partial.push_back(i);
}

vector<int> printNos(int x) {
    vector<int> partial;
    recursion(partial, x, 1);
    return partial;
}
int main(){
    printNos(4);
    return 0;
}