#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    pair<int,vector<int>>p;
    p.first=2;
    p.second={1,2,3};
    cout<<p.first<<" "<<endl;
    for(auto u:p.second) cout<<u<<" "; 
    cout<<endl;

    pair<int,int>p1,p2;
    p1={1,3};
    p2={2,3};
    if(p1>p2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    pair<int,int>p3=max(p1,p2);
    cout<<p3.first<<" "<<p3.second<<endl;

    */

    vector<pair<int,int>  > V;
    V.push_back({9,2});
    V.push_back({3,1});
    V.push_back({0,0});
    V.push_back({0,0});
    V.push_back({3,1});
    sort(V.begin(), V.end());
    for(auto u:V) cout<<u.first<<" "<<u.second<<endl;
    cout<<"After unique this vector: "<<endl;

    int sz=unique(V.begin(),V.end())-V.begin();
    for (int i = 0; i <sz; i++)
    {
        cout<<V[i].first<<" "<<V[i].second<<endl;
    }
    





    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/