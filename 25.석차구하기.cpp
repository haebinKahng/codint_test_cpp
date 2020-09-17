#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int i,j,a[101], b[101], n;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = 1;
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n ;j++)
		{
		    if(a[i]<a[j]) b[i]++;
	    }
	}
	
	
	for(i=1; i<=n; i++)
	{
		cout << b[i] << " ";
	}
	
 } 
