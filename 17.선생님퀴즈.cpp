#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[20], b[20], sum[20], i, j, cnt=0;
	scanf("%d", &n);
    
	for(i=1;i<=n;i++)
	{
		scanf("%d %d", &a[i], &b[i]); 
	}
	
	for(i=1;i<=n;i++)
	{
		for (j=1; j<=a[i]; j++)
		{
		   sum[i] = sum[i]+j;
	    }
	}
	
	for(i=1;i<=n;i++)
	{
		if(sum[i]==b[i])
		cout << "Yes" << endl;
		else
		cout << "No" << endl;
	}
}
