#include <iostream>
using namespace std;

int a[101], b[101];
int main()
{
	freopen("input.txt", "rt", stdin);
	char str[100];
	int i;
	scanf("%s", &str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			a[str[i]-64]++;
		}
		else a[str[i]-70]++;
	}
	
	scanf("%s", &str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			b[str[i]-64]++;
		}
		else b[str[i]-70]++;
	}
	
	for(i=1; i<=52 ;i++)
	{
		if(a[i]!=b[i]) 
		{
			cout << "No";
			exit(0);
		}
	}
	cout << "Yes";
	
}
