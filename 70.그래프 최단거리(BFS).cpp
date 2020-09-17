#include <iostream>
#include <vector>
using namespace std;
int dis[10], ch[10];
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, m, i, c, d, Q[10], f = -1, b = -1, x;
	vector<int> map[20];
	
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++)
    {
    	scanf("%d %d", &c, &d);
    	map[c].push_back(d);
	}
	
	Q[++b] = 1;
	ch[1] = 1;
	
    while(f<b)
    {
    	x = Q[++f];
    	for(i=0; i<map[x].size(); i++)
    	{
    		if(ch[map[x][i]]==0)
    		{
    			ch[map[x][i]] = 1;
    		    Q[++b] = map[x][i];
    		    dis[map[x][i]] = dis[x] + 1;
    		}
		}
	}
	
	for(i=2; i<=n; i++)
	{
		cout << i << " : " << dis[i] << endl;
	}
}
