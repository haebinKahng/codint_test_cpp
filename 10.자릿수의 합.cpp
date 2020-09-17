#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n,i,j,a[50001],b[50001], c[50001];
	scanf("%d", &n);
	int max = 0;
	int maxi = 0;
	
	for (i=0;i<n;i++)
	{
	    scanf("%d", &a[i]);
	    c[i] = a[i];
	}
	
	
	
	for(i=0;i<n;i++)
	{
	    while(a[i]!=0)
	    {
	       b[i] = b[i] + (a[i]%10);
	       a[i] = a[i]/10;
		}
		//cout<<b[i]<<" ";
		
	}
	
	for(i=0;i<n;i++)
	{
		if(b[i]>max) 
		{
			max = b[i];
		    maxi = i;
	    }
		
		else if (b[i]==max)
		{
		    if(c[maxi] < c[i])
		    {
		        max = b[i];
		    	maxi = i;
			}
		}
        
	}
	
	cout << b[maxi] << endl;
	cout << c[maxi] << endl;
}
