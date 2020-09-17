#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	freopen("input.txt","rt", stdin);
	int a[100], b[2], c[5], s, n, i, j, pos;
	
	for (i=0; i<2;i++)
	{
	    scanf("%d", &b[i]);
	    s = b[0];
	    n = b[1];
    }// scanf("%d %d", &s, &n);
    
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
    for (i=0; i<s; i++)
	{
		c[i] = 0;
	}
	
	pos = -1;
	
	
	for (i=0; i<n; i++ )
	{
       for (j = 0; j<s; j++)
	   {
		    if (c[j]==a[i])
			
			pos = j;
		
	   }
		
	    if (pos = -1)
		{ 
		    for(j = s-1;j>=1;j--)
		    {
		        c[j] = c[j-1];
		    }
		    
		    c[0] = a[i];
	    }    
	    
		else
		{ 
		    for(j=pos; j>=1; j--)
		    {
			    c[j] = c[j-1];
			
		    }
		    c[0] = a[i];
		    	
		}
		
		
	}

	for (i=0; i<s; i++)
	{
	  cout << c[i] << " " ;
	}
	return 0;
}
