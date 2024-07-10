#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>deQ;
    deQ.push_front(1);
    deQ.push_front(2);
    deQ.push_front(0);
    deQ.push_front(3);
    deQ.push_back(5);
    deQ.push_back(7);
    cout<<deQ.size()<<endl;
    cout<<"The front value: "<<deQ.front()<<" \nThe back valuse:"<<deQ.back()<<endl;
    while (!deQ.empty())
    {
        cout<<deQ.front()<<" ";
        deQ.pop_front();
        deQ.pop_back();
    }
    
    


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/