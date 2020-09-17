#include <iostream>
#include <queue>
using namespace std;
int ch[100];
int main()
{
    //freopen("input.txt", "rt", stdin);
	int n, k, i, cnt = 0;
	
	scanf("%d %d", &n, &k);
	queue<int> Q;
	
	i = 1;
	
	while(1)
	{
		if(i>n) i = 1;
	    if(ch[i]==0)
	    {
	    	Q.push(i);
	    //	cout << i << endl;
	    	if(Q.size()==3)
	    	{
	    		ch[Q.back()] = 1;
	    //		cout << "pop " << Q.back() << endl;
	    		cnt ++;
	    //		cout << "cnt " << cnt << endl;
	    		Q.pop();
	    		Q.pop();
	    		Q.pop();
			}
			i++;
		}
		else i++;
		if(cnt == n) 
		{
			cout << Q.back();
		    break;
		}
	}	
	
} 
