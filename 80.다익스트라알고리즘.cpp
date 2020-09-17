#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge
{
	int v;
	int cost;
	Edge(int a, int b)
	{
		v = a;
		cost = b;
	}
	bool operator<(const Edge &b) const
	{
		return cost > b.cost;   //내림차순, 최소힙 작은 값이 top으로  
	}
};

int main()
{
	freopen("input.txt", "rt", stdin);
	int n, m, i, a, b, c, max = 2147000000, x, sum = 0;
	scanf("%d %d", &n, &m);
	vector<pair<int, int> > map[20];
	priority_queue<Edge> pQ; 
	vector<int> dist(n+1, max);
	
	for(i=0; i<m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back({b,c});
	}
	
	pQ.push(Edge(1,0));
	dist[1] = 0;
	
	while(!pQ.empty())
	{
		Edge tmp = pQ.top();
		pQ.pop();
		int v1 = tmp.v;
		int c1 = tmp.cost;
		
		if(c1>dist[v1]) continue;
	
		for(i=0; i<map[v1].size(); i++)
		{
			x = dist[v1] + map[v1][i].second;
			if(x < dist[map[v1][i].first])
			{
				dist[map[v1][i].first] = x;
				pQ.push(Edge(map[v1][i].first, dist[map[v1][i].first]));
			}
		}
		
	}

    for(i=2; i<=n; i++)
    {
    	if(dist[i] == max) cout << i << " : " << "impossible" << endl;
    	else cout << i << " : " << dist[i] << endl; 
	}
	return 0;
}
