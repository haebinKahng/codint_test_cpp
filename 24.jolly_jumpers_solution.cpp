#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, i, now, pre, pos;
    scanf ("%d", &n);
    vector<int> ch(n);
    scanf("%d", &pre);
    
    for(i=1; i<n; i++)
    {
    	scanf("%d", &now);
    	pos = abs(now-pre);
    	if(pos>0 && pos<n && ch[pos]==0) ch[pos] =1;
    	else 
		{
		    cout << "No";
		    return 0;
		}
		pre = now;
 	}
	cout << "Yes";


}
