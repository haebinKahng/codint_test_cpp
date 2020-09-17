#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int a;
	priority_queue<int> pQ;
	
	while(1)
	{
		scanf("%d", &a);
		if(a == -1) break;
		if(a == 0) 
		{
			if(pQ.empty()) cout << -1 << endl;
			else
			{
				cout << pQ.top() << endl;
				pQ.pop();
			}
		}
		else pQ.push(a);
	}
} 
