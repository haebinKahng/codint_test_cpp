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
    //vector<int> b; // �̷��� �ϸ� �̸��� ������ ������ ������ �ʾҴ�. 
	// �ڷḦ tmp�� �о�����, 
	/*  for (i=0; i<n; i++)
	{
		scanf("%d", &tmp);
		b.push_back; // �ڷḦ �� �ڿ��� �߰� �ϴ� ��� 
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
		    return 0; // ���α׷� ���� 
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

