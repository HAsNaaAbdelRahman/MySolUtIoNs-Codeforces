#include <bits/stdc++.h>
using namespace std;
int main() 
{
          int n ;                            
          cin >> n ;
          pair<int , int > tc ;
          int cnt = 0 ;
          for(int i = 0 ; i < n ; i++){
          	cin >> tc.first >> tc.second ;
          	if(tc.second- tc.first >= 2)
          	cnt++;
          }
          cout << cnt ;
	return 0;
}

