#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[50];
	int c=0, h=0, i, pos;
	scanf("%s", &a);
	
	if(a[1]=='H')
	{
		c=12;
		pos = 1; //h의 포지션 
	}
	else
	{
		for(i=1;a[i]!='H';i++)
		{
			c = c*10+ (12*(a[i]-48));
		}
		pos = i; 
	}
	if(a[pos+1]=='\0') h==1;
	else{
		for(i = pos+1; a[i]!='\0';i++)
		{
			h = h*10 + (a[i]-48);
		}
	}
	cout << c << " " << h << endl;
	cout << c+h << endl;
}
