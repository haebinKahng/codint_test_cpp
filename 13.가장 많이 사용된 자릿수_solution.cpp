#include <iostream>
#include <vector>
using namespace std;

int ch[10];  //���������� ���� 0���� �ʱ�ȭ �Ǿ��ִ�.  
int main()
{
	freopen("input.txt", "rt", stdin);
	char a[101];
	int i, digit, max = -2147000000, res;
	
	scanf("%s", &a);
	for (i=0; a[i] != '\0'; i++)
	{
		digit = a[i]-48;
		ch[digit]++;     // ch[3] ������ ++ �Ǵ� ��.  
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
