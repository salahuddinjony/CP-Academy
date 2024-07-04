#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int>s;
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    for(auto u: s) cout<<u<<" ";
    cout<<endl;
    cout<<*(--s.end())<<endl;
    cout<<*(s.rbegin())<<endl;
    s.erase(2);
    for(auto u: s) cout<<u<<" ";
    cout<<endl;



    set<int, greater<int>>s1; //now the set is ordering with decreasing order
    s1.insert(3);
    s1.insert(4);
    s1.insert(2);
    s1.insert(1);
    for(auto u: s1) cout<<u<<" ";
    cout<<endl;
//sorted by decreasing order
    set< pair<int ,int >, greater<pair<int,int>> >pair;
    pair.insert({2,2});
    pair.insert({3,1});
    pair.insert({4,5});
    pair.insert({4,5});
    pair.insert({2,7});
    for(auto u: pair ) cout<<u.first<<u.second<<endl;

    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/