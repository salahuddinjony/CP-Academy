/*
Given an array of size n, you need to reduce the array. In one step, remove any two elements from the array and add their sum instead. Continue addition and removal until no further reduction possible. Output the minimum cost of reduction possible for the given array. 

Input

First line contains a positive integer T representing number of testcases.

Next line contains a number n denoting the size of array.

Next line contains N space separated positive integers (A[i])

1 ≤ T ≤ 50

1 ≤ n ≤ 106

1 ≤ A[i] ≤ 106

Output

Output minimum cost of reduction.

Example

Input:
2
4
1 6 3 20
3
2 2 2

Output:
44
10
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin>>t;
    while (t--)
    {
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        p.push(a);
    }
    int ans = 0;
    while (p.size() > 1) {
        int x1 = p.top();
        p.pop();
        int x2 = p.top();
        p.pop();
        p.push(x1+x2);
        ans += (x1+x2);
    }
    cout << ans << endl;
}
    return 0;

}


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/