#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt","rt",stdin);
	int n, a[101], i, j, tmp, idx, cnt = 0;
	scanf("%d", &n );
	
	for (i=0; i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i=0; i<n-1; i++)
	{
		idx = i;
		for (j = i+1; j<n; j++)
		{
			if (a[j]>a[idx]) idx = j;
			
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}

    for (i=n-1; i>=0; i--)
	{
		cout << a[i] << " "; 
    }
	
 } 
