#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(a) a.begin(), a.end()
using namespace std;
void HAsNaa(){
  cout<<fixed<<setprecision(6); 
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  #ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
// Notes
//  there are n*(n+1)/2 non-empty subarrays/substrings.
// for a sequence of size n, we can have (2n-1) non-empty sub-sequences in total. 
// If S has n elements in it then P(s) will have 2^n elements
// nCr = (n!) / (r! * (n-r)!)
//map < int , int , greater<int> > m ;

int main()
{
HAsNaa();
int l , r , a ;
cin >> l >> r >> a ;
cout << 2 * min({l + a , a + r , (a + l + r) / 2});
return 0;
}

