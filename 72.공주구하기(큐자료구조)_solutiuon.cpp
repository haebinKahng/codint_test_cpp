#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
	int n, k, i, x;
	
	scanf("%d %d", &n, &k);
	queue<int> Q;
	
    for(i=1; i<=n; i++)
    {
    	Q.push(i);
	}
	
	
	while(!Q.empty())
	{
		for(i=1; i<=k; i++)
		{
		    if(i < k)
			{
				Q.push(Q.front());
				Q.pop();
			}
			else if(i==k) Q.pop();
		}
		if(Q.size()==1)
		{
			cout << Q.front();
			Q.pop();
		}
	}
}
