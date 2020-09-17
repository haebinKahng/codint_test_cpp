#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
int main()
{
	
	freopen("input.txt", "rt", stdin);
	int n, i, j, tmp, cnt1=0, cnt2=0;
    scanf ("%d", &n);
    for (j=2; j<=n ;j++)
    {
    	tmp = j;                                                                                                             
    	i = 2;
    	while(1)
    	{
    		if(tmp%i==0)
    		{
    			if(i==2) cnt1++;
    			else if(i==5) cnt2++;
    			tmp = tmp/i;
			}
			else i++;
			if(tmp==1) break;
		}
	}
    if(cnt1<cnt2) cout << cnt1;
    else cout << cnt2;
    
}
