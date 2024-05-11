#include <bits/stdc++.h>
 
using namespace std;
 
bool test(int n)
{
    int a, b, c, d;
    d = n%10;
    c = (n/10)%10;
    b = (n/100)%10;
    a = (n/1000);
    if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)) return true;
    return false;
}
 
int main()
{
    int year;
    cin >> year;
    for(year++;;year++)
        if(test(year))
            break;
    cout << year;
 
    return 0;
}