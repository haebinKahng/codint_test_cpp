#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, lt=1, rt, cur, k=1, res=0;
    scanf ("%d", &n);

    
    while(lt!=0)
    {
    	lt = n/(k*10);
    	cur = (n/k)%10;
    	rt = n%k;
    	
    	if(cur>3)  res = res+((lt+1)*k);
    	else if(cur<3)  res = res+(lt*k);
    	else if(cur==3) res = res+((lt*k)+(rt+1));    	    	
    	
    	k = k*10;
    	
	}
    cout << res << endl;
}
