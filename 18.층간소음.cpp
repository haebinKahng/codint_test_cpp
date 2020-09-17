#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, m, a[101], b[101], i, j, cnt=0, max = -201;
	scanf("%d %d", &n, &m);
    
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]); 
		b[i] = 0;
	}
	
	for (i=0;i<n;i++)
	{
		if(a[i] > m)
		b[i] = 1;
	}
	
	
	for(i=0;i<n;i++)
	{
		cout << b[i] << " ";
	    
		if(b[i]>0) cnt++;
		else cnt = 0;
		if(cnt>max) max = cnt;
		
	}
	
	
	cout << endl;
	if (max==0)
	cout << "-1" << endl;
	else cout << max << endl;
}
