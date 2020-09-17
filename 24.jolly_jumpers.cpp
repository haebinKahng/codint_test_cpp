#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], i, cnt=0;;
    scanf ("%d", &n);
    vector<int> ch(n);
    for(i=0;i<n;i++)
    {
    	scanf("%d", &a[i]);
	}
	 
	for(i=0;i<n-1;i++)
	{
		b[i] = abs(a[i+1]-a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
	    if(b[i]>0 && b[i]<n && ch[b[i]]==0) ch[b[i]]=1;
	    else 
	    {
	    	cout << "No" ;
	    	return 0; //³¡³»±â  
		}
	}
	cout << "Yes"; 
}
