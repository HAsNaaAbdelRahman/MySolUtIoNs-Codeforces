#include <bits/stdc++.h>
using namespace std;
int main() 
{
string s ;
cin >> s ;
int cnt = 0 ;
for(int i = 0 ; i < s.length() ; i++)
{
if(s[i] == '4'|| s[i] == '7') cnt++;
}
if(cnt == 0) {
cout << "NO\n";

return 0;
}
while(cnt > 0){
	if(cnt % 10 != 4 && cnt % 10 != 7 ){
	
	cout << "NO\n";
	return 0;
}
cnt /= 10 ;
}
cout << "YES\n";

return 0;
}

