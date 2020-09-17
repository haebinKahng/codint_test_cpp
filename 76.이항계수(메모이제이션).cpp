#include <iostream>
using namespace std;
int n, r;

int D2(int r)
{
	if(r == 0) return 1;
	else
	{
		return r * D2(r-1);
	}
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	int i, j;
	
	scanf("%d %d", &n, &r);
	
	cout << D2(n)/(D2(n-r)*D2(r));
	
}

