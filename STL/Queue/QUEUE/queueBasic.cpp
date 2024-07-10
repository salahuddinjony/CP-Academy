#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(2);
    q.push(1);
    q.push(3);
    q.push(9);
    q.push(10);
    cout<<q.front()<<endl;
    
    q.pop();
    cout<<q.front()<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<q.size()<<endl;
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/