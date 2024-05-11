#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define pi 2 * acos (0.0)
#define pcase printf("Case %d: ",c)
using namespace std;
int main()
{
  int t;
  cin>>t;
  int c=1;
  while(t--){

        double area ,area2,r;
        cin>>r;
        area = pi*r*r;
        area2 = (r*2)*(r*2);
        double ans = abs(area2-area)+10e-9;
        pcase;
        printf("%.2lf\n",ans);
        c++;



  }
  }

