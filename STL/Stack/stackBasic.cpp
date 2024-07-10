#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(0);
    st.push(5);
    st.push(1);
    cout<<st.size()<<endl;
    while (!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/