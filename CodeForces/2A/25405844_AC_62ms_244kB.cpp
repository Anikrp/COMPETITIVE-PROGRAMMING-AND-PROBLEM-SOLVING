#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
   cin >> n;
   map<string, int> m;
   pair<string, int> ar[n];
   for(int i = 0; i < n; i ++){
      cin >> ar[i].first >> ar[i].second;
      m[ar[i].first] += ar[i].second;
   }
   int mx = INT_MIN;
   for(auto a: m){
      mx = max(mx, a.second);
   }
   map<string, int> vec;
   for(auto a: m){
      if(a.second == mx)
         vec[a.first] = 1;
   }
 
   for(int i = 0; i < n; i ++){
      if(vec[ar[i].first] != 0){
         vec[ar[i].first] += ar[i].second;
         if(vec[ar[i].first] - 1 >= mx){
            cout << ar[i].first;
            return 0;
         }
      }
   }
 
 
}