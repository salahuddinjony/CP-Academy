#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int, bool> visit; //log2(n)
    vector<int>v={1,1,2,2,3,3,4};
    for(auto u : v) visit[u]=true;
    for(auto u : visit) cout<<u.first<<" "<<u.second<<endl;
    
    //vector of map
    vector<map<string, int>>vs;
    map<string,int>c;
    c["abc"]=1;
    vs.push_back(c);
    cout<<vs[0]["abc"];


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/