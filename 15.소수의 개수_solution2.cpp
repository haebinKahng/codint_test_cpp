#include <iostream>
#include <vector>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, i, j, flag, cnt  = 0;
	scanf("%d", &n);
    for(i=2;i<=n;i++)
	{
		flag = 1;
		for(j=2; j*j<=i; j++)   //Á¦°ö±Ù È¿°ú  
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if (flag==1)
		cnt ++;
	}
	cout << cnt << endl;
}
