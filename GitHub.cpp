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


    int n ; cin>>n;

    if (n>=0){cout<<n;return 0;}

    int s = n%10;
    int d =n/10;
    int p = d ;


    int f =d%10;
    int v=n/100;
    int x = v;
    x=v*10+(s);

    //cout<<s<<" "<<f<<endl;
    //cout<<p<<" "<<x<<endl;

    if (p>=x){cout<<p;}
    else{cout<<x;}




}

