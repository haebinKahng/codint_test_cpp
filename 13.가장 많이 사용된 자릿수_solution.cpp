#include <iostream>
#include <vector>
using namespace std;

int ch[10];  //전역변수로 설정 0으로 초기화 되어있다.  
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[101];
	int i, digit, max = -2147000000, res;
	
	scanf("%s", &a);
	for (i=0; a[i] != '\0'; i++)
	{
		digit = a[i]-48;
		ch[digit]++;     // ch[3] 지점이 ++ 되는 것.  
	}
	
	for(i=0; i<=9; i++)
	{
	    if(ch[i]>=max)
	    {
	    	max = ch[i];
	    	res = i;
		}
		
	}
	
	cout << res ;
	
	
}
