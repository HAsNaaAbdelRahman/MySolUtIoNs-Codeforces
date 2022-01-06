#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n ;                            cin >> n ;
	int arr[n];                        int sum = 0  ;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr , arr + n);
             sum = sum / 2 ;
             int cnt = 0 , res = 0 ;
             for(int i = n-1 ; i >= 0 ; i--)
            {
            	res += arr[i];
            	cnt++;
            	if(sum < res)
            	break;
	}             
          cout << cnt ;
	return 0;
}

