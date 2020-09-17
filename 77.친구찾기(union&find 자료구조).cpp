#include <iostream>
using namespace std;
int unf[1001];

int F(int v)
{
	if(v == unf[v]) return v;
	//else return Find(unf[v]);
	else return unf[v] = F(unf[v]);        //메모이제이션 
}

void U(int a, int b)
{
	a = F(a);
	b = F(b);
	if(a != b) unf[a] = b;
} 

int main()
{
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "rt", stdin);
	int n, m, a, b;
	
	cin >> n >> m;
	
	for(int i = 1; i <=n ; i++)
	{
		unf[i] = i;
	}
	
	for(int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		U(a,b);
		cout << i << endl;
		for(int i = 1; i <= n; i++)
	    {
	    	cout << unf[i] << " ";
	    }
		cout << endl;
		cout << endl;
	}
	

//	cin >> a >> b;
//	a = F(a);
//	b = F(b);
//	if(a == b) cout << "YES";
//	else cout << "NO";
}
