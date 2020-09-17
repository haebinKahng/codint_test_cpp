#include <iostream>
using namespace std;
int main()
{
	freopen("input.txt", "rt", stdin);
	int n, a[101], b[101], aa=0, bb=0, i, lw = 0;
    for (i=0;i<10;i++)
    {
    	scanf("%d", &a[i]);
	}
    for (i=0;i<10;i++)
    {
    	scanf("%d", &b[i]);
	}
    
    
	for(i=0;i<10;i++)
    {
        if(a[i]==b[i])
		{
			aa++;
			bb++;
		}
		else if(a[i]>b[i])
		{
			aa = aa+3; 
			lw = 1;
		}
		else if(a[i]<b[i])
		{
			bb = bb+3;
			lw = 2;
		}
	}
	
	cout << aa << " " << bb << endl;
	if(aa>bb) cout << "A" << endl;
	else if (aa<bb) cout << "B" << endl;
	else if (aa==bb) 
	{
	    if (lw==1)  cout << "A" << endl;
	    if (lw==2)  cout << "B" << endl;
	    if (lw==0)  cout << "D" << endl;
	}
}
