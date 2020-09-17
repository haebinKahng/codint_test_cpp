#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 병합정렬 응용  

int main()
{
	freopen("input.txt","rt", stdin);
	int n, m, i, p1=0, p2=0, p3=0 ;
	scanf("%d", &n);
	// 벡터로 받기  
	vector<int> a(n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &m);
	
	vector<int> b(m), c(n+m);
	
	for (i=0; i<m; i++)
	{
		scanf("%d", &b[i]);
	}
	
	//이중 for문을 쓰면 제한시간 1초를 넘는다 
	// 일단 각 배열 정렬, 알고리즘 헤더파일 이용, 퀵정렬   
	sort(a.begin(), a.end()); //기본 오름차순 
	sort(b.begin(), b.end());
	
    while(p1<n &&p2<m)
	{
	    if(a[p1]==b[p2])
	    {
	    	c[p3++] = a[p1++];
		    p2++;
		}
		else if(a[p1]==b[p2])
		{
			p1++;
		}
		else p2++;
	}	
	
	for (i=0; i<p3;i++)
	{
		cout<< c[i] ;
	}
	
	return 0; 
}
