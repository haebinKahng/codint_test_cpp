#include <iostream>
#include <vector>
using namespace std;
int flag[30], cnt = 0, n;
vector<int> map[30];

void DFS(int v)
{
	int i;
	if(v == n)
	{
		cnt++;
	}
	else
	{
		for(i=0; i< map[v].size(); i++)
		{
			if(flag[map[v][i]] == 0)
			{
			    flag[map[v][i]] = 1;
				DFS(map[v][i]);
				flag[map[v][i]] = 0;
			}
		}
	}
}

int main()
{
	freopen("input.txt", "rt", stdin);
	int m, i, j, a, b;
	scanf("%d %d", &n, &m);
	
	for(i=1; i<=m; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	flag[1] = 1;
	DFS(1);
	cout << cnt;
}
