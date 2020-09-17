#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], c[101], i, j, tmp;
    scanf ("%d", &n);
    vector <int> aa;
    
    for (i=1;i<=n;i++)
	{
		a[i] = 0;
	}
       
    for(i=1; i<=n; i++)
    {
    	for(j=i; j<=n; j=j+i)
    	{
    		a[j] += 1;
		}
	}
	
	for(i=2;i<=n;i++)
	{
		if(a[i]==2)
		aa.push_back(i);
	}
    
    for(i=0;i<aa.size();i++)
    {
    	cout << aa[i] << " ";
	}
    
    cout << endl;
    
    for(i=0;i<aa.size();i++)
    {
    	c[i] = 0;
	}
    
    for(i=2;i<=n;i++)
    {
    	for(j=0;j<aa.size();j++)
    	{
    	  	tmp = i;
    	  	while(tmp%aa[j]==0)
    	  	{
    	  	    if(tmp%aa[j]==0) c[j]++;
				tmp = tmp/aa[j];	
			}
			tmp = 0;
			  /*if(i%aa[j]==0)
    	  	{
    	   		c[j]++;
    	   		tmp = i/aa[j];
    	   		while(tmp%aa[j]==0)
    	   		{
				    if(tmp%aa[j]==0) c[j]++;
				    tmp = tmp/aa[j];
			    }
			}
			tmp = 0;
			*/
		}
	}	
	
	for(i=0;i<aa.size();i++)
    {
    	cout << c[i] << " ";
	}
}
   
