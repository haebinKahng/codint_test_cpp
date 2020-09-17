#include <iostream>
using namespace std; 

//int DFS(int n, int r)
//{
//	if(n == r || r == 0) return 1;
//	else
//	{
//		return DFS(n-1,r-1) + DFS(n-1, r);
//	}
//}

// 메모이제이션 사용시 
int dy[21][21];
int DFS(int n, int r)
{
	if(n == r || r == 0) return 1;
	if(dy[n][r] > 0) return dy[n][r];
	else 
	{
		return dy[n][r] = DFS(n-1, r-1) + DFS(n-1,r);
	}
}

int main()
{
	freopen("input.txt", "rt", stdin);
	int n, r;
	scanf("%d %d", &n, &r);
	cout << DFS(n,r); 
}
