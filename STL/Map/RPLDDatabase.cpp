#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 1; i <=t; i++)
    {
        int n,m;
        cin>>n>>m;
        map<pair<int,int>, bool>vis;
        bool done=true;
        while (m--)
        {
            int a,b;
            cin>>a>>b;
            if(vis[{a,b}]) done=false;
            vis[{a,b}]=true;
        }
        if(done) cout<<"Scenario #"<<i<<": possible"<<endl;
        else cout<<"Scenario #"<<i<<": impossible"<<endl;

        
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/