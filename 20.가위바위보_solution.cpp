#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], c[101], i, cnt=0;
	scanf("%d", &n);
	
    for(i=1;i<=n;i++)
    {
    	scanf("%d", &a[i]);
	}
	
	for(i=1;i<=n;i++)
    {
    	scanf("%d", &b[i]);
	}
	
	for(i=1;i<=n;i++)
    {
    	if(a[i]==b[i]) cout << "D" << endl;
    	else if(a[i]==1 && b[i]==3) cout << "A" << endl;
    	else if(a[i]==2 && b[i]==1) cout << "A" << endl;
    	else if(a[i]==3 && b[i]==2) cout << "A" << endl;
    	else cout << "B" << endl;
	}
	
}
