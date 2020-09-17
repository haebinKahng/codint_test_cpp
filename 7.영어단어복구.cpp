#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	//freopen("input.txt", "rt", stdin);
	char a[50];
	int i;
	scanf( "%[^\n]s", &a);
	int size = sizeof(a);
	
	for (i=0; i<size; i++ )
	{
		if(a[i]>=65 && a[i]<=90)
		
	    {
			a[i] = a[i]+32;
		}
		
	}
	
	for(i=0; i<size; i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			cout<<a[i];
		}
	}
	
	
	
}
