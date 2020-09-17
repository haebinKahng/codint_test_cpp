#include <iostream>
#include <vector>
using namespace std; 
int n, m, i, flag[21], mind;
vector <pair<int, int> > g[21];
vector <int> s, d;
void DFS(int v)
{
	int i, cnt = 0;
	if(v == n)
	{
		for(i=0; i<s.size(); i++)
		{
			cnt = cnt + s[i];
		}
		d.push_back(cnt);
	}
	
	else
	{
		for(i=0; i<g[v].size(); i++)
		{
			if(flag[g[v][i].first]==0)
			{
				flag[g[v][i].first] = 1;
				s.push_back(g[v][i].second);
				DFS(g[v][i].first);
				flag[g[v][i].first] = 0;
				s.pop_back();
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &m);
	int a, b, c, mind = 21470000;
		
	for(i=1; i<=m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		g[a].push_back({b, c});
	}

	flag[1] = 1;
	DFS(1);
	for(i=0; i<d.size(); i++)
	{
		if(d[i] < mind)
		mind = d[i];
	}
	cout << mind;
}
