#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
#include <cstring>
#include <fstream>
#include<vector>
#define int long long

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



     int n ; cin>>n;
    char arr [n][n];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            cin>>arr [i][j];
        }
    }


    int x  = 0 ;

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {

            int count=0;
            if (i>0 and arr[i-1][j]=='o') {count++;}//up

            if (i<n-1 and arr[i+1][j]=='o') {count++;}//down

            if (j>0 and arr[i][j-1]=='o') {count++;}//left

            if (j<n-1 and arr[i][j+1]=='o') {count++;}//right

            if (count%2==1){cout<<"NO"; return 0;}

        }
    }
    cout<<"YES";return 0;





}