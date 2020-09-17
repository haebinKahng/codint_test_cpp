#include <iostream>
#include <queue>
#include <cmath>
using namespace std;
int ch[10001], d[3] = {1, -1, 5};

int main()
{
    freopen("input.txt", "rt", stdin);
    int s, e, x, pos, i;
    queue<int> Q;
    
    scanf("%d %d", &s, &e);
    ch[s] = 1;
    Q.push(s);
    
    while(!Q.empty())
    {
    	x = Q.front();
    	Q.pop();
    	for(i=0; i<3; i++)
    	{
    		pos = x + d[i];
    		if(pos < 1 || pos > 10000) continue;
    		if(pos == e)
    		{
    			cout << "pos 14 here: " << ch[pos] << endl;
    			cout << ch[x];
    			exit(0);  //프로그램 자체 종료  
			}
			if(ch[pos] == 0)
			{
				Q.push(pos);
				ch[pos] = ch[x] + 1;
				cout << "pos: " << pos << " ch " << ch[pos] << endl;
			}
		}
	}
}
