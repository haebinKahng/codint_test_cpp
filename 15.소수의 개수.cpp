#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[200001],i,j, cnt=0;
	scanf("%d", &n);
    for(i=1;i<=n;i++)
	{
		a[i] = 0;
	}
	
	for(i=1; i<=n; i++)
	{
		for(j=i;j<=n;j=j+i)
		{
			a[j] += 1;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		//cout << a[i] << " ";
		if(a[i]==2) 
		{
		cnt++;
		cout << i << " ";
	    }
	}
	cout << endl;
	cout<<cnt;
}
