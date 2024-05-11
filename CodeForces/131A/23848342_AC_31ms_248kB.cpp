#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int i,sum=0,j;
    for(i=0;i<a.length();i++){
    if(isupper(a[i]))
    {
        sum++;

    }
        }
        if(sum==a.length()||(sum==(a.length()-1)&&a[0]>='a'&&a[0]<='z')){
                for(i=0;i<a.length();i++){
                    if(isupper(a[i])){
        a[i]=tolower(a[i]);}
        else{
        a[i]=toupper(a[i]);}
    }
    cout<<a;
        }
        else{
            cout<<a;}
}
