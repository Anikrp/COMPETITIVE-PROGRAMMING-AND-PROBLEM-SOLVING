#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x1, y1, x[1000], y[1000],ans=0;

    cin >> n >> x1 >> y1;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        bool r = true;
        for (int j = 0; j < i; j++){
            if ((x[i]-x1)*(y[j]-y1)==(x[j]-x1)*(y[i]-y1)){
               r = false;
            }
        }
        if (r==true) ans++;
    }
    cout <<ans<<endl;



}

