#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
using namespace std;
void HAsNaa(){
  cout<<fixed<<setprecision(0); 
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

int main()
{
HAsNaa();
int n , m , cnt = 0 ;
cin >> n >> m ;
vector<int>v(n);
for(int i = 0 ; i < n ; i++)
{
  cin >> v[i];
}
for(int i = 0; i < n ; i++)
{
  if(v[i] >= v[m-1] && v[i] > 0) {
  cnt++;
  }
}
cout << cnt ;
return 0;
}
