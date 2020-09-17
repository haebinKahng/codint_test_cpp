#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
    char a[50];
	int   i, res = 0, cnt = 0;
	vector<int> n;	
	scanf( "%s", &a);
	
	/*for (i=0; i<50 ;i++)
	{
		if(a[i]<58 && a[i]>47)
		{
		    n.push_back(a[i]);	
		}
		
	}
	
	for (vector<int>::iterator iter = n.begin();iter != n.end();++iter)
	{
		if(*iter)
	    cout<< *iter-48 ;
	}
	*/
	for (i=0; a[i]!='\0'; i++ )
	{
		if(a[i]>=48 && a[i]<=57)
		{
			res = res*10+(a[i]-48);
		}
		
	}
	
	printf("%d\n", res);
	
	//약수 갯수 구하기
	
	for (i=1;i<=res; i++)
	{
		if (res%i==0) cnt++;
	 } 
	
	printf("%d", cnt);
	return 0;
}


