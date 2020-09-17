#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], c[101], i, cnt=0;
	scanf("%d", &n);
	
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++)
    {
    	scanf("%d", &b[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i]) c[i]=3;
		if (a[i]+b[i]==3)
		{
			if(a[i]>b[i]) c[i] = 1;
			else c[i] = 2;
		}
		if (a[i]+b[i]==4)
		{
			if(a[i]>b[i]) c[i] = 2;
			else if(a[i]<b[i]) c[i] = 1;
		}
		if (a[i]+b[i]==5)
		{
			if(a[i]>b[i]) c[i] = 1;
			else c[i] = 2;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(c[i]==1)
		cout << "A" <<endl;
		if(c[i]==2)
		cout << "B" <<endl;
		if(c[i]==3)
		cout << "D" <<endl;
	}
}   
