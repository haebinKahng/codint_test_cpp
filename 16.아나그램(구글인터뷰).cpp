#include <iostream>
#include <cstring>
using namespace std;
int aa[101], bb[101];
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[101], b[101];
	int i, j, cnt = 0;
	gets(a);
	gets(b);
 	 
 	/*for(i=0; i<strlen(a); i++)
	{
	    cout << a[i] <<" ";
	}
	*/ 
	for(i=0; i<strlen(a); i++)
	{
		if(a[i]>=65 && a[i]<=90) 
		{
		    aa[a[i]-64]++;
		}
		if(a[i]>=97 && a[i]<=122) 
		{
		    aa[a[i]-70]++;
		}
		
	}
    
    for(i=0; i<strlen(b); i++)
	{
		if(b[i]>=65 && b[i]<=90) 
		{
		    bb[b[i]-64]++;
		}
		if(b[i]>=97 && b[i]<=122) 
		{
		    bb[b[i]-70]++;
		}
		
	}
	
    for(i=1; i<=52; i++)
	{
	    cout << aa[i] <<" ";
	}
    cout << endl;
    
    for(i=1; i<=52; i++)
	{
	    cout << bb[i] <<" ";
	}
	cout << endl;
	

 	for(i=1; i<=52 ;i++)
	{
		if(aa[i]!=bb[i]) 
		{
			cout << "No";
			exit(0);
		}
	}
	cout << "Yes";
 	
}
