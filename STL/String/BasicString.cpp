#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0); cout.tie(0); //its use for speed up cin and cout more than scanf
#define endl '\n'
int main(){
    optimize();
    // string s;
    // s+='a';
    // s+='b';
    // s+='c';
    // cout<<s<<endl;

    // string name;
    // getline(cin,name);
    // cout<<name; 

    /* int t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin, s);
        s=c+s;
        cout<<s<<endl;
       
    } */
//Remove specific value
    string st="ABSCA";
    st.erase(remove(st.begin(),st.end(),'A'), st.end());
    cout<<st<<endl;

//String to int or int to string 
    int a=123;
    string value=to_string(a);
    value[0]='2';
    cout<<value<<endl;

    string t="123";
    int as=stoi(t);
    cout<<as<<endl;


// check upper or lower


    char C='A';
    
    int f1=isupper(C); //if upper then show 1 otherwise 0;
    cout<<f1<<endl;

    char c='l';
    cout<<char(toupper(c))<<endl;
    cout<<char(tolower(c))<<endl;
    int f2=islower(c); //if lower then show 1 otherwise 0;
    cout<<f2<<endl;
    char Space=' ';
    int sp=isspace(Space);
    cout<<sp<<endl;

    string name1="Salah ";
    string name2="Uddin";
    copy(name2.begin(),name2.end(), back_inserter(name1));
    cout<<name1<<endl;
    if(name1.find("Sal")!=-1) cout<<"Sub string is found!"<<endl;
    



    
    
    



    return 0;
}



/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/