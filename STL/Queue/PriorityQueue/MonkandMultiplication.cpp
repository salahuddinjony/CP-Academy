/*
he Monk learned about priority queues recently and asked his teacher for an interesting problem. So his teacher came up with a simple problem. He now has an integer array A. For each index i, he wants to find the product of the largest, second largest and the third largest integer in the range [1,i].
Note: Two numbers can be the same value-wise but they should be distinct index-wise.

Input:
The first line contains an integer N, denoting the number of elements in the array A.
The next line contains N space separated integers, each denoting the ith integer of the array A.

Output:
Print the answer for each index in each line. If there is no second largest or third largest number in the array A upto that index, then print "-1", without the quotes.

Constraints:
1 <= N <= 100000
0 <= A[i] <= 1000000

Sample input:
5
1 2 3 4 5
Sample Output:
-1
-1
6
24
60


*/
#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int a[mx];
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++) cin>>a[i];

    priority_queue<int>p;
    for (int i = 0; i <n; i++)
    {
        p.push(a[i]);
        if(p.size() >=3){
            int a1=p.top();
            p.pop();
            int a2=p.top();
            p.pop();
            int a3=p.top();
            p.pop();
            cout<<1ll*a1*a2*a3<<endl;
            p.push(a1);
            p.push(a2);
            p.push(a3);

        }
        else cout<<"-1"<<endl;
    }
    
    
   
        
    
    
    
     


    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/