#include <bits/stdc++.h>
using namespace std;
int main() 
{
int tc ;                               cin >> tc ;
vector<int>v(tc);
for(int i = 0 ; i < tc  ;i++)
{
	cin >> v[i];
}

int cnt = 0 ;

for(int i = 0 ; i < tc  ;i++)
{
	if(v[i] != v[i+1])
	cnt++;
}
cout << cnt ;
return 0;
}

