#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, sum = 0, c=1, d=9, res=0;
	scanf("%d", &n);
	
	while(sum+d<n)
	{
		res = res + (c*d);
		sum = sum+d;
		c++;   // 다음자리 수 
		d = d*10;		
	} 
    res = res + (n-sum) * c;
    cout << res;	
}
