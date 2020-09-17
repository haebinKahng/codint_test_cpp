#include <iostream>
using namespace std;
int a[8][8], flag[8][8], cnt = 0;
int dx[4] = {1,-1,0,0};  //시계방향대로  
int dy[4] = {0,0,1,-1};

void DFS(int x, int y)
{
	int i, xx, yy; 
	if(x==7 && y==7)
	{
		cnt++;
		cout << "-------------" << endl;
	}
	else
	{
		for(i=0; i<4; i++)
		{
			xx = x + dx[i];
			yy = y + dy[i];
			if(xx<1 || xx>7 || yy<1 || yy>7) continue;
			if(a[xx][yy]==0 && flag[xx][yy]==0)
			{
				flag[xx][yy] = 1;
				cout << "if: "<< xx << " " << yy << endl;
				DFS(xx,yy);
				flag[xx][yy] = 0;
			}
		}
	}
}

int main()
{
    freopen("input.txt", "rt", stdin);
	int i,j;
	
	for(i=1; i<=7; i++)	
	{
		for(j=1; j<=7; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	flag[1][1] = 1;
	DFS(1,1);
    cout << "cnt: " << cnt;
}
