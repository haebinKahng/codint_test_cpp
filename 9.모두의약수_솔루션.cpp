#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n,i,j,a[1001];
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		a[i] = 0;
	}
	
	for (i=1;i<=n;i++)
	{
	    for (j=i;j<=n;j+=i)//j=j+i
	    {
	    	a[j]+=1; 
			//a[j]++;
		}
	}
	
	for (i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
}
