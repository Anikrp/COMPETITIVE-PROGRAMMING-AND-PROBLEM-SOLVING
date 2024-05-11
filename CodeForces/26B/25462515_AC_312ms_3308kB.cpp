#include<bits/stdc++.h>
using namespace std;

int main(){

    int st=1;
    string a;

    getline(cin,a);
    stack<char>s;
    int c=0;

    for(int i =0;i<a.size();i++){
            if(a[i]=='('){s.push(a[i]);}
            else if(s.empty()!=true)
            {
                s.pop();
                c++;
            }
            }
            cout<<c*2<<"\n";
}
