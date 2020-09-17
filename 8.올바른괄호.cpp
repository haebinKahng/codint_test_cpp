#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[50];
	int i;
	//scanf("%s", &a);
	gets(a);
	vector<char> n;
	
	for (i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
		{
		    n.push_back(a[i]);
		}
		
		if(a[i]==')')
		{
			n.pop_back();
		}
		
		if(n.size()<0) break;

	}
	

	if (n.empty()) printf("Yes"); 
	if (!n.empty())  printf("No");


	

	
	
	
}
