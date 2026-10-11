#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
#include <cstring>
#include <fstream>
#include<vector>
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int n ,  q ; cin>>n>>q;
    vector<int>v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }

    while(q--){
        int l , r ;

        string s ;cin>>s;


        if(s=="pop_back"){

            v.pop_back();
        }

        else if(s =="front"){
            cout<<v.front()<<"\n";
        }
        else if(s=="back"){
            cout<<v.back()<<"\n";
        }

        else if(s == "sort"){
            cin>>l >> r;


            sort(v.begin()+l-1 ,v.begin()+r);

        }


        else if(s=="reverse"){
            cin>>l>>r;
            reverse(v.begin()+l-1,v.begin()+r);
        }
        else if (s=="print"){
            int p ; cin>>p;
            cout<<v[p-1]<<"\n";
        }

        else if (s=="push_back"){
            int m ;
            cin>>m;

            v.push_back(m);

        }







    }




}