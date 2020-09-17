#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[5000], i,res, max = -45646, maxi;
	scanf("%d", &n);
	cout << n <<endl;

	for(i=0;i<10;i++)
	{
	   a[i] = 0;	
	}
	
	
	while(n>0)
	{

		res = n%10;
		n = n/10;
		for(i=0;i<10;i++)
		{
			if(res==i)
			a[i]++;
		}	
		res = 0;
	}
	
	for(i=0; i<10 ;i++)
    {
    	cout << a[i] << " ";
	}
	cout << " " << endl;
	
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
		   max = a[i];
		   maxi = i;
	    }
		else if (a[i] == max)
		{    
		    if(i>maxi) maxi=i;
	    }
	}
	
	cout << maxi;

	

}
