#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>>v;

    vector<int>a1={1,2,3,4};
    vector<int>a2={0,11,2,2,3,4};
    v.push_back(a1);
    v.push_back(a2);

    for(auto u:v){
        for(auto g: u){
            cout<<g<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/