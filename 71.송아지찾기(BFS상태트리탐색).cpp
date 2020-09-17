#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int s, e, cnt = 0;
    
    scanf("%d %d", &s, &e);

    
    while(s != e)
    {
    	if(abs(e-s)>=3)
    	{
    		s = s+5;
    		cnt ++;
    		//cout << "here1" << endl;
		}
		else if(abs(e-s)<3)
	    {
	    	if(e>s)
	    	{
	    		s = s+1;
	    		cnt ++;
	    //		cout << "here2" << endl;
			}
			else
			{
				s = s-1;
				cnt++;
		//		cout << "here3" << endl;
			}
		}	
	}
	
	cout << cnt;
}
