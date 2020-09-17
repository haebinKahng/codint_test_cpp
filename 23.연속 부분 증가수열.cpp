#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[100000], b[100000], i, cnt=1, max = 1;
    scanf ("%d", &n);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		b[i] = a[i+1]-a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
	    if(b[i]>=0) 
	    {
	    	cnt++;
	    	if(cnt>max) max = cnt;
		}
		else cnt =1;
	}
	//cout << endl;
	cout << max  << endl;
}

	
