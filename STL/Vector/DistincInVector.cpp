#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v={4,3,1,5,5,6,6,7};
    sort(v.begin(),v.end());
    int size= unique(v.begin(),v.end()) - v.begin();
    for (int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/