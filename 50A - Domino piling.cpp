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
int n , m ;
cin >> n >> m ;
cout << floor(n*m*0.5);
return 0;
}
