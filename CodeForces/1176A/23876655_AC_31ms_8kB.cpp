#include<bits/stdc++.h>
using namespace std;
#define             lld                         long long
#define             sf                          scanf
#define             pf                          printf
int main()
{
     int q,k;
     lld n;

    sf ("%d",&q);

    while (q--)
    {
        sf ("%lld",&n);

        k = 0;

        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else if (n % 3 == 0)
            {
                n /= 3;
                n *= 2;
            }
            else if (n % 5 == 0)
            {
                n /= 5;
                n *= 4;
            }
            else
            {
                k = -1;
                break;
            }

            ++k;
        }

        pf ("%d\n",k);
    }
}
