#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>V={1,3,2,6};

    sort(V.begin(),V.end(), greater<int>());
    // sort(V.rbegin(),V.rend());

    for (auto &v : V)
    {
        v+=2;
       cout<<v<<" ";
    }
    

    vector<int>Value={2,3,4,5};
    reverse(Value.begin(),Value.end());
cout<<endl;
    while (! Value.empty())
    {
        cout<<Value.back();
        Value.pop_back();
        
    }
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/
