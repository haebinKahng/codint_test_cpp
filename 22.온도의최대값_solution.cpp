#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, m, i, sum = 0, max;
    scanf ("%d %d", &n, &m);
    vector<int> a(n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i=0;i<m;i++)
	{
		sum = sum+a[i];
	}
	
	max = sum;
	for(i=m;i<n;i++)
	{
		sum = sum +(a[i]-a[i-m]);
		if(sum>max) max = sum;
	}
	
	cout << max;
}
