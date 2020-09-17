#include <iostream>
#include <vector>
using namespace std;
int a[15], ch[15], res[15], n, r, sum = 0;

void DFS(int L)
{
	int i, j;
	if(L == r)
	{  
		for(j=0; j<L; j++)
		{
			cout << res[j] << " ";
		}
		sum ++;
		cout << endl;
	}
	else
	{
		for(i=1; i<=n; i++)
		{
            if(ch[i]==0)
		    {    
			    res[L] = a[i];
		        ch[i] = 1;
		        DFS(L+1);
		        ch[i] = 0;
	        }
	    }
	}
}

int main()
{
	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &n, &r);
    
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	} 
    
    DFS(0);
    
	cout << sum;
	
	return 0;
 } 
