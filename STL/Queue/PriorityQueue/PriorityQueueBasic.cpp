#include<bits/stdc++.h>
using namespace std;
int main(){

    priority_queue<int>Pq;
    Pq.push(1);
    Pq.push(3);
    Pq.push(2);
    Pq.push(5);
    Pq.push(9);
    cout<<Pq.top()<<endl;
    Pq.pop();
    cout<<Pq.top()<<endl;
    Pq.pop();
    while (!Pq.empty())
    {
        cout<<Pq.top()<<" ";
        Pq.pop();
    }
    cout<<"\nThe size is : "<<Pq.size()<<endl;

    //ordering ascending ordering the priority Queue
    priority_queue<int, vector<int>, greater<int>>P;
    P.push(1);
    P.push(3);
    P.push(2);
    P.push(5);
    P.push(9);

    cout<<"After Ascending ordering: "<<endl;
    while (!P.empty())
    {
        cout<<P.top()<<" ";
        P.pop();
    }


//  priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> PQpair;
 priority_queue<pair<int,int>, vector<pair<int,int>>> PQpair;
 //Print out the Rank of pair based on contest ranking
    PQpair.push({3,-2});
    PQpair.push({1,-1});
    PQpair.push({3,-1});
    PQpair.push({3,-2});
cout<<"\nPair of priority Queue: "<<endl;
    while (!PQpair.empty())
    {
        //auto tp=PQpair.top();
        cout<<PQpair.top().first<<" "<<PQpair.top().second*-1<<endl;
        PQpair.pop();
    }
    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/