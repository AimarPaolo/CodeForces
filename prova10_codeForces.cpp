/*esercizio C codeforces excercise C++ training*/

#include <iostream>
using namespace std;

int main(){
    int n, s, k, l;
    cin >> n;
    for(int i=0; i<=n; i++){
        cin >> s, k, l;
        if(s == l){
            cout << k << endl;
        }else if(s == k){
            cout << l << endl;
        }else{
            cout << n << endl;
        }
    }
}