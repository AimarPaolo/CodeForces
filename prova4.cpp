#include<bits/stdc++.h>
using namespace std;

int recurs(int n){
        if(n<=1){
                return n;
        }
        return recurs(n-1)+recurs(n-2);
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin >> n;
        cout << recurs(n) << endl;
        }
