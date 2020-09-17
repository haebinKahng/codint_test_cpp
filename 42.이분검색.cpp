#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, key, i, lt=0, rt, mid, tmp;
	scanf("%d %d", &n, &key);

    vector<int> b(n);
    //vector<int> b; // 이렇게 하면 이름만 생기지 공간은 생기지 않았다. 
	// 자료를 tmp로 읽었을때, 
	/*  for (i=0; i<n; i++)
	{
		scanf("%d", &tmp);
		b.push_back; // 자료를 맨 뒤에서 추가 하는 방식 
	}	
	*/
	
	 
    for (i=0; i<n; i++)
	{
		scanf("%d", &b[i]);
	}	
	
	sort(b.begin(), b.end());
	
	
	/*for (i=0; i<n; i++)
	{
		cout<< b[i] << " ";
	}
	*/
    
	rt = n-1;
	
	while(lt<=rt)
	{
 
	    mid = (lt+rt)/2;
	
	    if (b[mid] == key)
	    {
		    cout << mid+1 << endl;
		    return 0; // 프로그램 종료 
	    }
	    else if (b[mid] > key)
	    {
		    rt = mid-1;
	    }
	    else if (b[mid] < key) 
		{
		    lt = mid+1; 
	    }
    }
    return 0;
}

