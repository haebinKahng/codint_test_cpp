#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, cnt = 0, i, j;
    scanf ("%d", &n);
    vector<int> a(n+1);
    
    for(i=1;i<=n;i++)
    {
    	scanf("%d", &a[i]);
    }
    
    printf("1 ");
    
    for(i=2; i<=n; i++)
    {
    	cnt = 0;
    	for(j=i-1; j>=1; j--)
    	{
    		if(a[i]<=a[j]) cnt++;
    		
		}
			printf("%d ", cnt+1);
	}
	return 0;
}
