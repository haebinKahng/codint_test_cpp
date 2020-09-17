#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int ch[100];

struct Edge
{
    int e;
	int val;
	Edge(int a, int b) //push할때 생성자 호출해서 push 
	{
		e = a;
		val = b;
    }
	bool operator <(const Edge &b)const
	{
		return val > b.val; //최소힙으로 구성 
	}		                      
};

int main()
{
	freopen("input.txt", "rt", stdin);
	int v, e, i, a, b, c, res = 0;
	scanf("%d %d", &v, &e);
	priority_queue<Edge> Q;
	vector<pair<int, int> > map[30];
	
    for(i=1; i<=e; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
	    map[a].push_back({b,c});
		map[b].push_back({a,c});    
	}
	
	Q.push(Edge(1,0));

    while(!Q.empty())
	{
		Edge tmp = Q.top();
		Q.pop();
		int v = tmp.e;  //1
		int cost = tmp.val; //0 
		
		if(ch[v] == 0)
		{
			res += cost;
			ch[v] = 1;
			for(i=0; i<map[v].size(); i++)
			{
				Q.push(Edge(map[v][i].first, map[v][i].second));
			}
		}	
	}	
	cout << res;
}
