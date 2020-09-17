#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101],c[101],d[101],b,i,j;
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
	   scanf("%d", &a[i]);
	   c[i] = 0;
	   d[i] = 0;	
	   cout << a[i] <<" ";
	}
	cout << endl;
	for(i=0;i<n;i++)
    {
    	
    	while(a[i]!=0)
    	{
    		b = a[i]%10;
    		c[i] = c[i]*10+b;
    		a[i] = a[i]/10;
    		b = 0;
		}
		
		cout << c[i] <<" ";
		
	}
	
	cout << endl;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=c[i];j++)
		{
			if(c[i]%j==0) d[i]+=1; 
		}
		cout << d[i] <<" ";
	}
	cout<< endl;
	for(i=0;i<n;i++)
	{
		if(d[i]==2)
		cout << c[i] << " ";
	}
}
	
