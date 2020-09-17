#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Q[100], f = -1, b = -1, ch[10];
vector<int> map[10];

int main()
{
	freopen("input.txt", "rt", stdin);
    int i, a, b1, x;
	
	for(i=1; i<=6; i++)	
	{
		scanf("%d %d", &a, &b1);
		map[a].push_back(b1);
		map[b1].push_back(a); //무방향이다 
	}
	
	Q[++b] = 1;
	ch[1] = 1;
	
	while(f<b)
	{
		x = Q[++f];
		cout << x << " ";
		for(i=0; i<map[x].size(); i++)
		{
			if(ch[map[x][i]]==0)
			{
				ch[map[x][i]] = 1;
				Q[++b] = map[x][i];
			}
		}
	}
	//return 0;
}
