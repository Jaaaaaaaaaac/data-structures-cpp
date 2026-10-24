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

    int n ;cin>>n;
    int arr [n];
    int s  = 0 , d = 0 ;


    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    int l=0 , r=n-1 ;
    for(int i=0;i<n;i++) {



        if (i%2==0){
            if (arr[l]>arr[r]){s+=arr[l]; l++;}
            else{s+=arr[r];r--;}
        }

        else {
            if (arr[l]>arr[r]) {d+=arr[l];l++;}
            else{d+=arr[r];r--;}
        }
    }



    cout<<s<<" "<<d<<endl;



}

