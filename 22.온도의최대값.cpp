#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, m, a[100000], b[100000], i,j,u, max = -2147000000;
    scanf ("%d %d", &n, &m);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
	}
	
	
	for(i=0;i<=n-m;i++)
    {
    	b[i] = 0;
	}
	
	
	for(j=0;j<=n-m;j++)
	{
	  	for(u=j;u<j+m;u++)
	   	{
	 		b[j] = b[j] + a[u];
		}
		//cout << b[j] << " ";
	}
		
	for(i=0;i<=n-m;i++)
    {
    	if(b[i] > max)
    	max = b[i];
	}
	cout << endl;
    cout << max << endl;
}
    
