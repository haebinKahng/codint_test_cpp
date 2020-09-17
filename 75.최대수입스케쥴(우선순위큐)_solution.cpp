#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
struct Data
{
	int money;
	int when;
	Data(int a, int b)   //생성자 매개변수가 있는  
	{                    // c++ class 구조체 거의 동일 클래스는 정보의 은닉화가 되고, 상속이 되고  
		money = a;
		when = b;
	}
    bool operator<(Data &b)
    {
    	return when > b.when;      //class 라면 when 대신 this(현재) > b.when(뒤쪽); 
	}		                       //내림차순 정렬  
};

int main()
{
	freopen("input.txt", "rt", stdin);
	int n, i, j, a, b, res = 0, max = -2147000000;
	vector<Data> T;     //구조체 Data 
	priority_queue<int> pQ;
	scanf("%d", &n); 
	
	for(i=1; i<=n; i++)
	{
		scanf("%d %d", &a, &b);
		T.push_back(Data(a,b));
		if(b>max) max = b;
	}
	
	sort(T.begin(), T.end());
	j = 0;
	
	for(i=max; i>=1; i--)
	{
		for(; j<n; j++)
		{
			if(T[j].when < i) break;
			pQ.push(T[j].money);
		}
		if(!pQ.empty())
		{
			res += pQ.top();
			pQ.pop();
		}
	}
	
	cout << res;
	
}
