#include <iostream>
#include <vector>
using namespace std;
int unf[100];
int a[100], b[100], c[100];

int F(int v)
{
	if (v == unf[v]) return v;
    else
	{
	    return unf[v] = F(unf[v]);	
	}	
}

int U(int a, int b)
{
	a = F(a);
	b = F(b);
	
	if(a != b) unf[a] = b;
}

int main()
{
	//freopen("input.txt", "rt", stdin);
	int v, e, i, j, tmp1, tmp2, tmp3, x, y, sum = 0;
	scanf("%d %d", &v, &e);
	
	for(i=1; i<=v; i++)
	{
		unf[i] = i;
	}
	
    for(i=0; i<e; i++)
	{
		scanf("%d %d %d", &a[i], &b[i], &c[i]);   
	}
	
	for (i=0; i<e-1;i++)    //버블정렬 시작  
	{
		for (j=0; j<e-i-1; j++)
	    {
		    if (c[j] > c[j+1])   //swap 하기  
			{
			    tmp3 = c[j];
			    tmp2 = b[j];
			    tmp1 = a[j];
			    
	            c[j] = c[j+1];
	            b[j] = b[j+1];
	            a[j] = a[j+1];
	            
	            c[j+1] = tmp3;
	            b[j+1] = tmp2;
	            a[j+1] = tmp1;
	        }
	    } 
    }
    
    for(i=0; i<e; i++)
    {
    	x = F(a[i]); 
    	y = F(b[i]);
    	
    	//cout << x << " " << y << endl;
    	if(x != y) 
		{
			//cout << c[i] << endl;
		    sum = sum + c[i];
		    U(a[i], b[i]);
		}
	}
	
	cout << sum;	

}
