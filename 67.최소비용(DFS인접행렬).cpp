#include <iostream>
#include <vector>
using namespace std;
int n, m, a[21][21], flag[21];
vector<int> s, d;

void DFS (int v)
{
	int i, cnt = 0;
	if(v == n)
	{
		for(i=0; i<s.size(); i++)
		{
			cnt = cnt + s[i];
		}
	//	cout << cnt << endl;
		d.push_back(cnt);
	}
	else
	{
		for(i=2; i<=n; i++)
		{
			if(a[v][i]>0 && flag[i]==0)
			{
				flag[i] = 1;
				s.push_back(a[v][i]);
				DFS(i);
				flag[i] = 0;
				s.pop_back();
			}
		}
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);
    int i, f, b, c, mind = 2147000;
	scanf("%d %d", &n, &m);	
	
	for(i=1; i<=m; i++)
	{
		scanf("%d %d %d", &f, &b, &c);
		a[f][b] = c;
	}	
	
	DFS(1);
	for(i=0; i<d.size(); i++)
	{
		if(d[i]<mind)
		mind = d[i];
	}
	cout << mind;
}
