#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int unf[1001];

struct Edge
{
	int v1;
	int v2;
	int val;
	Edge(int a, int b, int c)
	{
		v1 = a;
		v2 = b;
		val = c;
	}
	bool operator<(const Edge &b) const
	{
		return val < b.val;
	}
};

int F(int v)
{
	if (v == unf[v]) return v;
    else
	{
	    return unf[v] = F(unf[v]);	
	}	
}

int U(int a, int b)
{
	a = F(a);
	b = F(b);
	
	if(a != b) unf[a] = b;
}

int main()
{
	freopen("input.txt", "rt", stdin);
	vector<Edge> Ed;
	int i, n, m, a, b, c, cnt = 0, res = 0;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++)
	{
		unf[i] = i;
	}
	
	for(i=1; i<=m; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		Ed.push_back(Edge(a,b,c));
	}
	
	sort(Ed.begin(), Ed.end());
	
	for(i=0; i<m; i++)
	{
		int fa = F(Ed[i].v1);
		int fb = F(Ed[i].v2);
		
		if(fa != fb)
		{
			res += Ed[i].val;
			U(Ed[i].v1, Ed[i].v2);
		}
	}
	
	cout << res;
}
