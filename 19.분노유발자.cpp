#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], i, j, cnt=0, k=0;
	scanf("%d", &n);

    for(i=0; i<n; i++)
    {
    	scanf("%d", &a[i]);
	}
	
	for(i=0; i<n-1; i++)
	{
		cnt = 0;
		for(j=i+1; j<n; j++)
	    {
		    if(a[i] > a[j]) cnt++;
		}
		if (cnt == (n-i-1)) k++; 
	}
	
	cout << k << endl;
}
	
