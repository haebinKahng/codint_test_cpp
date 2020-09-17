#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a, i;
	scanf("%d %d", &n, &a);

    vector<int> b(n);
    for (i=0; i<n; i++)
	{
		scanf("%d", &b[i]);
	}	
	
	sort(b.begin(), b.end());
	
	
	for (i=0; i<n; i++)
	{
		cout<< b[i] << " ";
	}
	
	cout<< " " <<endl;
	
	for (i=0; i<n; i++)
	{
		if (a == b[i])
		cout << i+1 ;
	}
	return 0;
 } 
