#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, i, m, cnt = 0, res = 0;
	scanf("%d", &n);
		
	
	for (i=1;i<=n;i++)
	{
	    if(i-10<0) cnt++;
	    if(i-10>=0) cnt = cnt+2;
	    if(i-100>=0) cnt = cnt+3;
	    
		/*for(m=1; m<12; m++)
		{
		    if(i-10^m > 0) 
			cnt = cnt+m;
        }
        */
	}
	
	cout << cnt << endl;
}
