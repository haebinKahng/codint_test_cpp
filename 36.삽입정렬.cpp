#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	freopen("input.txt","rt", stdin);
	int a[101], n, i, j, tmp;
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i=1; i<n; i++ )
	{
		tmp = a[i];
		for (j = i-1; j>=0; j--)
		{
			if (a[j]>tmp)
			
			a[j+1] = a[j];
		    
			else break;
		}
		a[j+1] = tmp;
	}
	
	
	for (i=0; i<n; i++)
	{
	  cout << a[i] << endl;
	}
	return 0;
}
