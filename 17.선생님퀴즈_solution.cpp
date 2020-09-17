#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, sum = 0, i, j, m, ans;
	scanf("%d", &n);
    
	for(i=1;i<=n;i++)
	{
		scanf("%d %d", &m, &ans);
		sum = 0; // 매번 초기화  
		for(j=1; j<=m;j++)
		{
			sum +=j;
		} 
		
		if(ans==sum) cout << "Yes" << endl;
		
		else cout << "No" << endl;
	}
	
}
