#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct A
{
	int pay;
	int day;
};

bool cmp(const A &p, const A &q)
{
    return p.day > q.day;
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	int n, i, j, c, d, sum = 0;
	priority_queue<int> pQ;
	scanf("%d", &n);
	A a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &c, &d);
		a[i].pay = c;
		a[i].day = d;
	}
	
	sort(a, a + n, cmp);

   
	for(i=a[0].day; i>=1; i--)
	{
		for(j=0; j<n; j++)
		{
			if(i == a[j].day)
			{
				pQ.push(a[j].pay);
			}
		}
		if(!pQ.empty())
		{
            sum = sum + pQ.top();
            pQ.pop();
	    }
	}		

    cout << sum;
}
