#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);
	char a[50];
	int i, cnt = 0;
	scanf("%s", &a);

    for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(') cnt++;
		if(a[i]==')') cnt--;
		
		if(cnt<0) break;
	}
	
	if (cnt==0) printf("Yes");
	if (cnt!=0) printf("No");
 } 
