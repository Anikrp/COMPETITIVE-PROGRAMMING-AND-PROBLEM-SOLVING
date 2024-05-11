#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,h1,m1,r,x,y;
    scanf("%d:%d", &h, &m);
    scanf("%d:%d", &h1, &m1);
    x=(h*60)+m;
    y=h1*60+m1;
    r = (x+y)/2;
    printf("%02d:%02d\n",r /60, r % 60);

}
