#include <iostream>
#include <vector>
#define x first
#define y second
using namespace std;

int ch[30], n, cost = 2147000000;
vector <pair<int , int> > map[30];

void DFS(int v, int sum)
{
	int i; 
	if(v == n)
	{
		if(sum< cost)
		cost = sum;
	}
	else
	{
		for(i=0; i<map[v].size(); i++)
		{
			if(ch[map[v][i].first]==0)
			{
				ch[map[v][i].first] = 1;
				DFS(map[v][i].x, sum + map[v][i].y);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main()
{
	freopen("input.txt", "rt", stdin);
	int m, a, b, c, i;
	scanf("%d %d", &n, &m);
	for(i=1; i<=m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b, c));
	}
	
	ch[1] = 1;
	DFS(1,0);
	cout << cost;
}
