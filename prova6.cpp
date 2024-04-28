#include <stdio.h>
#include <iostream>
using namespace std;

void alphaRamp(int n) {
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j <= i; j++){
            cout << (char)(i+'A') << " ";
        }
        cout << endl;
        // it is printing a piramid of letters like that:
        /*A
          B B
          C C C
          D D D D
          depending of the input n*/
          
    }
}
int main(){
    alphaRamp(4);
    return 0;    
}
