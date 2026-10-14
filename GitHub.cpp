#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
#include <cstring>
#include <fstream>
#include<vector>
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n , m ; cin >> n >> m;



    for (int i = 1 ; i <= n ; ++ i) {
        if (i % 2 == 1) {
            for (int j = 1 ; j <= m ; ++ j) {
                cout<<"#";
            }

            }

        else {
            for (int j = 1 ; j <= m ; ++ j) {
                if (i%4==2) {
                    if (j==m) {cout<<"#";}
                    else {cout<<".";}
                }
                else {
                    if (j==1) {cout<<"#";}
                    else {cout<<".";}
                }
            }






        }
        cout << endl;
        }













}