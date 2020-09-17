#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; //16까지만 가능 그 이상 overflow 
int main()
{
	
	freopen("input.txt", "rt", stdin);
	int n, a=1, i, j, cnt=0, max=1;
    scanf ("%d", &n);
    vector <int> aa;
    cout << n << endl;
    
    for(i=1;i<=n;i++)
    {
    	a = a*i;
	}
	
	cout << a << endl;

	while(a/10>0)
	{
		aa.push_back(a%10);
		a = a/10;
	}
	
	
	for(i=0; i<aa.size() ; i++)
	{
		cout << aa[i] << " ";
	}
	cout << endl;
	
	for(i=0; i<aa.size() ; i++)
	{
		if(aa[i]==0)
		{
			cnt ++;
			if(cnt>max) max = cnt;
		}
		else cnt = 0;
		
	}
	
	cout << max << endl;
	
}
