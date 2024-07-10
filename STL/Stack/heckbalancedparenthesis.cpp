
#include<bits/stdc++.h>
using namespace std;
bool IsBalanced(char c1, char c2){
    return (c1=='(' and c2==')' || c1=='{' and c2=='}' || c1=='[' and c2==']');
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        stack<char>st;
        int done=1;
        for(auto u: s){
            if(u=='(' || u=='{' || u=='[') st.push(u);
            else{
                if(st.empty()){
                    done=0;
                    break;
                }
                else{ 
                    if(IsBalanced(st.top(), u)){
                        st.pop();
                    }
                    else{
                        done=0;
                        break;
                        }
                }
            }
        }
        if(!st.empty()) done =0;
        if(done) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }

          return 0;
    }
    



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/



/*
#include<bits/stdc++.h>
using namespace std;
unordered_map<char, int>symbol={ {'(',-1},{'{',-2},{'[',-3}, {')',1},{'}',2},{']',3},};
string IsBalanced(string s){
    stack<char>st;
    for(char u: s){
        if(symbol[u]<0) st.push(u);
        else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbol[top]+symbol[u]!=0) return "NO";
            }
    }
    if(st.empty()) return "YES";
    return "NO";

}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       string s;
       cin>>s;
       cout<<IsBalanced(s)<<endl;
    }
    
    


    return 0;
}

*/


/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/