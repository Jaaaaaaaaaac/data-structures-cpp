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

   
    int n   , x= 0, police = 0;cin>>n;
    vector <int> v (n);

    for (int i = 0; i < n; i++)
        {cin>>v[i];

    }


    for (int i = 0; i < n; i++) {
        if (v[i] >0) {police+=v[i];}
        if (v[i] ==-1) {x++;}
        if (police >0 and v[i]==-1) {x--;police--;}


    }





    cout<<x<<endl;


}
