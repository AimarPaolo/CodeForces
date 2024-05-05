/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // questi due comandi vengono utilizzati per velocizzare l'output della richiesta
    int i;
    cin >> i;
    for(int s=0; s<i; s++){
        long long int p_x, p_y, a_x, a_y, b_x, b_y;
        cin >> p_x >> p_y;
        cin >> a_x >> a_y;
        cin >> b_x >> b_y;
        double AP = sqrt(pow((p_x-a_x),2) + pow((p_y-a_y),2));
        double BP = sqrt(pow((p_x-b_x),2) + pow((p_y-b_y),2));
        double min_covered_P = min(AP, BP);
        double AO = sqrt(pow((a_x),2) + pow((a_y),2));
        double BO = sqrt(pow((b_x),2) + pow((b_y),2));
        double min_covered_O = min(AO, BO);
        double AB = sqrt(pow((b_x-a_x),2) + pow((b_y-a_y),2))/2;
        double val = max(min_covered_P, min_covered_O);
        if(max(AP, AO) <= min(BP, BO)){
            cout << fixed << setprecision(10) <<max(AO, AP) << endl;
        }else if(max(BP, BO) <= min(AP, AO)){
            cout << fixed << setprecision(10) <<max(BO, BP) << endl;
        }else{
            cout << fixed << setprecision(10) <<max(val, AB) << endl;
        }
    }
    return 0;
}
/*cout << fixed << setprecision(10) <<max(val, AB) << endl;
in questo caso fixed lo utilizzo per sistemare l'output*/
