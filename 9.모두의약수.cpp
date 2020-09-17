#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n,i,j, cnt=0;
	scanf("%d", &n);
	
	for (i=1;i<=n;i++)
	{
	    for (j=1;j<=i;j++)
	    {
	    	if(i%j==0) cnt++;
		}
		cout << cnt << " ";
		cnt = 0;
	}
	
 } 
