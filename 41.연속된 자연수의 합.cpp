#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt", "rt", stdin);
	int a, b=1, cnt=0, tmp, i;
	scanf("%d", &a);
	
	tmp = a;
	a--;
	while(a>0)
	{
		b++;
		a = a-b;  //15-1-2=12
		          //15-1-2-3
	    if (a%b == 0)
	    {
	    	for(i=1;i<=b;i++)
	    	{
	    		cout<< (a/b) +i <<" + ";  
			}
			    cout << " = " << tmp << endl ;
			    cnt++;
		}
		
	}
	cout<< cnt <<endl;
	return 0;
 } 
