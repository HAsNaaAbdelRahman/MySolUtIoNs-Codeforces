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
// functions

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
// Notes
//  there are n*(n+1)/2 non-empty subarrays/substrings.
// for a sequence of size n, we can have (2n-1) non-empty sub-sequences in total. 
// If S has n elements in it then P(s) will have 2^n elements
// nCr = (n!) / (r! * (n-r)!)
//map < int , int , greater<int> > m ;

//-----------------------------------------------------------------------------------------//
/*// freq <map>
map < int , int > m ;
int s ;
cin >> s ;
for(int i = 0 ; i < s ; i++){
int n ;
cin >> n ;
m[n]++;
}
for(auto &i : m){
  cout << i.first << " " << i.second << endl;
}
*/
//-----------------------------------------------------------------------------------------//
int main()
{
  HAsNaa();


return 0;
}
