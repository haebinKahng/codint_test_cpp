#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], i, j;
    scanf ("%d", &n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
    	b[i] = i+1;
	}
	
	for(i=1; i<n; i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[i]-a[j]>=0) b[i]--;	
		}
	}

	for(i=0;i<n;i++)
    {
        cout << b[i] << " ";
	}
}
