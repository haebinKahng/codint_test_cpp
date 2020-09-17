#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[101], b[101], c[300];
int main()
{
	freopen("input.txt","rt", stdin);
	int n, m, i, p1=1, p2=1, p3=1 ;
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &m);
	
	for (i=1; i<=m; i++)
	{
		scanf("%d", &b[i]);
	}
	
	//합치기 작업 
	
	while(p1<=n && p2<=m )
	{
		if (a[p1]<b[p2])
		{
			c[p3++] = a[p1++];  //a[p1]을 c[p1]에 넣고 1증가 시킨다				 
		}
		else
		{
			c[p3++] = b[p3++];

		 } 
	}   
	
	while(p1<=n)
	{
		c[p3++] = a[p1++]; //넣고 증가한다 
	}
	
	while(p2<=m)
	{
		c[p3++] = b[p2++];
	 } 
	 
	for (i=1; i<p3; i++)
	{
		//cout<<c[i]<<endl;
		printf("%d", c[i]);
	} 
	
	return 0;
}
