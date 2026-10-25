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
#include <ostream>
signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n  , x; cin>>n>>x;

    int s = x;
    int d = 0 ;

    while (n--) {
        char c; cin>>c;
        int a; cin>>a;

        if (c=='+'){s+=a;}
        else if (c=='-') {
            if (s>=a){s-=a;}
            else {d++;}
        }
    }
    cout<<s<<" "  <<d  ;


}